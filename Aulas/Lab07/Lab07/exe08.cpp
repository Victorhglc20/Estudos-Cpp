#include <iostream>
using namespace std;


int testar(int,int);
int main()
{
	unsigned char c = 0;
	int l = c;
	cout << "digite um valor entre 0 a 255:";
	cin >> l;
	c = l;
	cout << endl << endl << "O número " << l << " em binário é ";
	for(int i =0;i<8;i++)
	{
		// RECEBE O VALOR DE I NA FUNÇÃO POIS ELE QUE DEFINIRA A POSIÇÃO NO FOR
		// QUE SERÁ ALTERADA A CADA LOOP!!!!

		if (testar(c,i))
			cout << 1;
		else
			cout << 0;

	}
}



int testar(int l,int n)
{
	/*
		PRIMEIRAMENTE DEFINIMOS UM VALOR PARA FIACAR AO MAXIMO DA POSIÇAO DO BIT A ESQUERDA
		QUE NESTE CASO SERIA 1000 0000 = 128

		E MOVEMOS A POSIÇÃO DELE EM I, NO COMEÇO É 0, E VAI ATE O FINAL 7, SEMPRE 1 A MENOS POÍS
		COMEÇA A CONTAR PELO 0


	*/
	unsigned char m = 128>>n;


	return m & l;

	

}