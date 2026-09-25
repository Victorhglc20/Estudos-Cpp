#include <iostream>
using namespace std;

void inverter(int[], int);

int main()
{
	const int tam=10;
	int ordem[tam] {0,1,2,3,4,5,6,7,8,9,};
	inverter(ordem, tam);
	
}

void inverter(int vet[], int tam)
{
	for (int i = tam-1; i >= 0;i--)
		cout << vet[i] << " ";
}