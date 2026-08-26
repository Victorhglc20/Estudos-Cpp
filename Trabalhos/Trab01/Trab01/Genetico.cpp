#include <iostream>
#include "Binario.h"
#include "Genetico.h"
using namespace std;


 int pu(unsigned short a, unsigned short b)
{
	return ou(alto(a), baixo(b));
	}

 int arit(unsigned short a, unsigned short b)
 {
	 return aritimetica(a,b);
 }

 int mutSim(unsigned short a, int b)
 {
	 unsigned short c = 0;

	 if (testar(b, a) == 1)
		return desligar(b, a);
	 else
		 return ligar(b, a);
	
	 
 }

 int mutDup(unsigned short a)
 {
	 unsigned short temp;
	 temp = mutSim(a,3);

	 temp = mutSim(temp,12);
	 return temp;

 }