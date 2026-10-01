#include <iostream>
using namespace std;

int main()
{
	int i;
	int vet[] = { 46, 78, 40, 96, 74, 58, 32, 56, 91, 6 };
	int* ptr1 = vet;
	int* ptr2 = vet;
	
	for (i = 0;i < 10;i=i+2)
		cout << vet[i]<<", "<<vet[i+1]<<endl;
	cout << endl;
	for (i = 0;i < 10;i = i + 2)
		cout << *ptr1 + i << ", " << *ptr2 + (i + 1)<<endl;
	
}