#include <iostream>
#include "Binario.h"
using namespace std;


void teste()
{
	cout << "OLA MUNDO";
}

int ligar(int bit, unsigned short input)	
{
	unsigned short mascara = 1 << bit;
		return input = mascara | input;
}



	int desligar(int bit, unsigned short input)
	{
		unsigned short mascara = ~(1 << bit);
			return input = mascara & input;
	}



int testar(int bit, unsigned short input)
{
	unsigned short mascara = 1 << bit;
	
		if (mascara & input)
			return 1;
		else
			return 0;

		
}



	int aritimetica(unsigned short input1, unsigned short input2)
	{
		return input1 & input2;
	}



int ou(unsigned short input1, unsigned short input2)
{
	return input1 | input2;
}


		int baixo(unsigned short input)
		{
			unsigned short mascara = 255;
				return input & mascara;
		}


int alto(unsigned short input)
{
	unsigned short mascara = 65280;
		return input & mascara;
}