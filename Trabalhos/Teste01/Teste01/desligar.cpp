//#include <iostream>
//using namespace std;
//
//int main()
//{
//
//	
//	cout << "qual bit desligar?";
//	int bit = 0;
//	cin >>  bit;
//	unsigned char mascara=~(1<<bit);
//	/*
//		0000 0001
//		<<3 bit digitado pelo usuario 
//		0000 1000
//		~() inversão proposta na máscara
//		1111 0111
//	*/
//	unsigned char estado = 252;
//	estado = estado & mascara;
//	/*
//		mascara
//		1111 0111
//		estado
//		1111 1100
//		aplicando AND 
//		1111 0111 <--estado
//		1111 1100 <--mascara
//		1111 0111 <--!QUANDO OS DOIS SÃO VERDADEIROS 1(TRUE),0(FALSE) CASO O CONTRÁRIO!
//		SE CASO ESTADO 1 E MASCARA 1=1, CASO ESTADO 0 E MASCARA 0=0,ELE NUNCA LIGA APENAS DESLIGA
//	*/
//
//	cout << endl << (int)estado;
//
//}