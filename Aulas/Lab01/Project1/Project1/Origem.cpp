#include <iostream>	
using namespace std;

int soma(int*, int*,int*);

int main()
{
	

	int a = 2;
	int b = 3;
	int c = 0;
	int* pa = &a;
	int* pb = &b;
	int* pc = &c;

	soma(pa,pb,pc);
	
	cout <<  c;
}

int soma(int* a, int* b,int* c)
{
	*c = *a + *b;
	return 0;
}