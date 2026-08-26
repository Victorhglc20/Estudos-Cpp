//#include <iostream>
//using namespace std;
//
//int ligar(unsigned char);
//int desligar(unsigned char);
//int testar(unsigned char);
//int main()
//{
//	unsigned char n = 13;
//
//
//	cout <<"ligando:" << ligar(n)<<endl;
//	cout << "desligando" << desligar(n) << endl;
//	cout << "resultado do teste: ";
//	if (testar(n))
//		cout << "verdadeiro";
//	else
//		cout << "falso";
//	
//}
//
//int desligar(unsigned char l)
//{
//	/*
//		
//		!! O NÚMERO 1111=1011& 0100
//		COMO SE FOSSE UMA CONTA REVERSA OU PROVA REAL NÃO ESTRANHE KKKKKK
//
//
//		1111
//		1101
//
//		0010
//		1101
//
//		0011
//		1100
//
//		1111
//		0100
//		1011
//	*/
//	unsigned char m = l&~4;
//
//	return m & l;
//
//
//}
//
//
//int ligar(unsigned char l)
//{
//	
//	unsigned char m = 2;
//
//
//	return m | l;
//
//}
//
//int testar(unsigned char l)
//{
//	unsigned char m = 2;
//
//
//	return m & l;
//
//	
//
//}