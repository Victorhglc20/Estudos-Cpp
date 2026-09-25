#include <iostream>
using namespace std;

struct ascii {
	char let;
	int num;
};

ascii* conver(int ,char);

int main()
{
	int num;
	char let;
	
	cout << "Digite um número e uma letra: "<< endl;
	cin >> num >> let;
	ascii *paz=conver(num,let);
	cout << paz->num << " " << paz->let;
}

ascii* conver(int a, char b)
{
	ascii* pas = new ascii;
	pas->let = b;
	pas->num = a;
	return pas;
}