#include <iostream>
#include <cmath>
#include <numbers>
using namespace std;

//################################################################################################
//PROTÓTIPO

double quad(double);
double cubo(double);

//################################################################################################
int main()
{
	double n;
	cout << "Digite um valor:";
	cin >> n;
	cout << "Quadrado: " << quad(n)<<endl;
	cout << "Cubo: " << cubo(n) << endl;
	cout << "Cubo do quadrado: " << cubo(quad(n));



}

//################################################################################################
// FUNÇÕES
double quad(double n)
{
	return pow(n, 2);
}
double cubo(double n)
{
	return pow(n, 3);
}