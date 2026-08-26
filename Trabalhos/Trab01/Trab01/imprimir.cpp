#include <iostream>
#include "Binario.h"
#include "Genetico.h"
#include "imprimir.h"

#include <vector>
using namespace std;

int imprimir(unsigned short input)
{
	int peso = 0;
	int valor = 0;
	char objeto[16]{ 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P' };
	vector <char> objlig;
	//int size = objlig.size();



	 



	for (int i = 0;i < 16;i++)
	{

		unsigned short mascara = 32768 >> i;
		/*
			LEMBRANDO VALOR 1 REPRESENTA (0000 0001) E VALOR 128 REPRESENTA (1000 0000)
			<< MOVE PARA ESQUERDA E >> PARA DIREITA
		*/
		if (input & mascara)
		{
			//cout << 1;
			
			objlig.push_back(objeto[i]);
			
		}
		

	}



	for (int i = 0;i < objlig.size();i++)
	{
		char atual = objlig[i];
		switch (atual) {
		case 'A':
			peso += 12;
			valor += 4;
			break;

		case 'B':
			peso += 3;
			valor += 4;
			break;

		case 'C':
			peso += 5;
			valor += 8;
			break;

		case 'D':
			peso += 4;
			valor += 10;
			break;

		case 'E':
			peso += 9;
			valor += 15;
			break;

		case 'F':
			peso += 1;
			valor += 3;
			break;

		case 'G':
			peso += 2;
			valor += 1;
			break;

		case 'H':
			peso += 3;
			valor += 1;
			break;

		case 'I':
			peso += 4;
			valor += 2;
			break;

		case 'J':
			peso += 1;
			valor += 10;
			break;

		case 'K':
			peso += 2;
			valor += 20;
			break;

		case 'L':
			peso += 4;
			valor += 15;
			break;

		case 'M':
			peso += 5;
			valor += 10;
			break;

		case 'N':
			peso += 2;
			valor += 3;
			break;

		case 'O':
			peso += 4;
			valor += 4;
			break;

		case 'P':
			peso += 1;
			valor += 12;
			break;
		}
		
	}

	
	cout << endl << input << " - " << "$" << valor << " - " << peso << "KG" << " - ";
	

	if (peso < 21)
		return 1;
	else
		return 0;
}