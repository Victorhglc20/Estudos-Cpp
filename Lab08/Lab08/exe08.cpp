#include <iostream>
using namespace std;

int main()
{

	 float a = 3.78575f * 8.129338f; // GERA MAIS DIGITOS SIGNIFICATIVOS DO QUE UM FLOAT SUPORTA

	 float b = 3e30f + 2e15f; // A DIFERENÇA DE VALORES É MUITO GRANDE E O FLOAT NÃO PODERIA ACOMPANHAR
							  // POIS DE UM PONTO A OUTRO DO NÚMERO FORMARIA UMA QUANTIDADE MUITO MAIOR DE NÚMEROS
							  // SIGNIFICATIVOS, A PONTO DE NÃO SER POSSÍVEL VERIFICAR O RESULTADO!!

	 float c = 20518.56f * 2.0f; // NÃO HÁ PROBLEMAS DE PRECISÃO!!
	 
	 float d = 3.14159f + 1.45f; // NÃO HÁ PROBLEMAS DE PRECISÃO!!
	 
	 float e = 2.0f * 1e30f; // NÃO HÁ PROBLEMAS DE PRECISÃO!!


	

	 cout << a << endl << b << endl << c << endl << d << endl << e << endl;

}