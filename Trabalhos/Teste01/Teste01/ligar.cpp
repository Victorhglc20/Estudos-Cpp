//#include <iostream>
//using namespace std;
//
//int main()
//{
//	
//	cout << "ligar qual bit?";
//	int bit = 0;
//	cin >> bit;
//	unsigned char mascara = 1;
//	mascara = mascara << bit;
// /*
//	mascara
//	0000 0001
//	bit desloca 3
//	mascara atual
//	0000 1000
// */
//	unsigned char estado = 167;
//	estado = mascara | estado;
// /*
//	estado
//	1010 0111
//	mascara
//	0000 1000
//	operação OR
//	1010 0111
//	0000 1000
//	1010 1111 <-- OPERAÇÃO "OR" RETORNA TRUE QUANDO UMA DAS SENTENÇAS SÃO VERDADEIRAS
//	CASO ESTADO ESTEJA 1(TRUE) INDEPENDE DO VALOR DO MÁSCARA, POÍS DARÁ COMO VERDADEIRA SEMPRE!
//	CASO ESTADO ESTEJA 0(FALSE) SERÁ APENAS TRUE SE O VALOR DE MÁSCARA FOR 1(TRUE)! CASO CONTRÁRIO SEGUIRÁ SENDO 0!
// */
//	cout << (int)estado<<endl;
//
//}