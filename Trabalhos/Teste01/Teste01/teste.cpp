//#include <iostream>
//using namespace std;
//
//int main()
//{
//	
//	cout << "Testar qual bit?";// VAMOS TESTA 7!!!
//	int bit = 0;
//	cin >> bit;
//	unsigned char mascara = 1;
//	mascara = mascara << bit;
//	/*
//		máscara	
//		0000 0001
//		máscara após usuário digitar o bit
//		1000 0000
//	*/
//	unsigned char estado = 240;
//	
//	if (estado & mascara)
//		cout << "ligado" << endl << endl;
//	else
//		cout << "desligado";
//	/*
//		OPERAÇÃO DE CIMA!!!
//		estado 
//		1111 0000
//		máscara
//		1000 0000
//		operação AND
//		1000 0000 <-- AND retorna 1(true) apenas quando os dois valores são 1(true),caso contrário 0(false)!!!
//		um valor booleano retorna false para 0 e true para todos os outros valores, ou seja, ele não esta 
//		dando o valor verdadeiro no caso de 7 pq na quela posição é o valor 1, mas sim pq o valor que fica
//		após a oeração AND é diferente de ZERO!!!!!!
//		1000 0000 <- é verdadeiro pq significa 128 e não 0, segue o teste.
//	*/
//	estado = estado & mascara;
//	cout << (int)estado;
//	
//}