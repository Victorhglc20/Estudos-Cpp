//#include <iostream>
//using namespace std;
//
//const int tam = 16;
//int main()
//{
//	long long fatorial[tam];
//
//	fatorial[1] = fatorial[0] = 1ll;
//
//	for (int i = 2; i < tam; i++)
//		fatorial[i] = i * fatorial[i - 1];// tem nada no fatorial "i", se usar *= estará multiplicando lixo!!!
//
//	for (int i = 0; i < tam; i++)
//		cout << i << "! = " << fatorial[i]<<endl;
//}