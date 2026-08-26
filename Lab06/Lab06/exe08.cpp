#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

long long isShort(long long);
long long isInt(long long);

int main()
{
	long long teste = 0;
	
	cout << "Digite um valor inteiro: ";
	cin >> teste;

	if (isShort(teste))
		cout << teste << " cabe em 16 bits!";
	else
		cout << teste << " não cabe em 16 bits!";

	cout << endl;



	if (isInt(teste))
		cout << teste << " cabe em 32 bits!";
	else
		cout << teste << " não cabe em 32 bits!";
		


}


long long isShort(long long n)
{
	if (n < SHRT_MAX && n >SHRT_MIN)
		return 1;
	else
		return 0;
}


long long isInt(long long n)
{
	if (n < INT_MAX && n > INT_MIN)
		return 1;
	else
		return 0;
}



