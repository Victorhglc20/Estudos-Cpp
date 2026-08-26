#include <iostream>
using namespace std;

int main()
{

	cout << "digite um valor de 0 ate 255 para converter!!  ";
	unsigned char oito= 0;
	unsigned short dese = 0;
	int burrice = 0;
	cin >>burrice;
	oito = burrice;
	cout << "digite um valor de 0 ate 65535!!  ";
	cin >> burrice;
	dese = burrice;

	
	/*
		1.O CHAR SÓ RECEBE O PRIMEIRO CARACTERE INSERIDO!!
		//--------------------------------------------------------------------------------------------------
		2.ELE O CARACTERE INSERIDO PARA O CODIGO ASCII E VIRA OUTRO NÚMERO!!!!!
		//--------------------------------------------------------------------------------------------------
		3.PARA PASSAR UM VALOR NUMÉRICO PRO CHAR VINDO DO USUÁRIO, É NECESSÁRIO RECEBER A INFORMAÇÃO
		DO TECLADO POR UMA VARIAVEL INT
		//--------------------------------------------------------------------------------------------------
		4.PARA CHECAR O VALOR ULTILIZE --> cout << (int)estado;
	*/
	for (int i = 0;i <=7;i++)
	{
		unsigned char mascara =128>>i;
		/*
			LEMBRANDO VALOR 1 REPRESENTA (0000 0001) E VALOR 128 REPRESENTA (1000 0000)
			<< MOVE PARA ESQUERDA E >> PARA DIREITA 
		*/
		if (oito & mascara)
			cout << 1;
		else
			cout << 0;
	}

	cout << endl << endl;
	for (int i = 0;i < 16;i++)
	{
		unsigned short mascara = 32768 >> i;
		/*
			LEMBRANDO VALOR 1 REPRESENTA (0000 0001) E VALOR 128 REPRESENTA (1000 0000)
			<< MOVE PARA ESQUERDA E >> PARA DIREITA
		*/
		if (dese & mascara)
			cout << 1;
		else
			cout << 0;
	}
	//0001 0100 --> 0010 1000
	//61258

}