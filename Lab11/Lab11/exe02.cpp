//#include <iostream>
//using  namespace std;
//
//int main()
//{
//	/* O comando irá pegar o primeiro e segundo mome, contendo espaço
//	(cin.getline, não pode ser usado com o cin pois o comando cin deixa um \n no final como marcação
//	o que indica para a função cin.getline como fim de leitura do buffer, e finalizar a função antes de começar)
//	Próximo passo é amamazenar o conceito(nota) e dar uma menor no que a perguntada a que o usuáro merece */
//
//	char nome[50];
//	char nota = 0;
//
//	cout << "Qual o seu nome?: ";
//	cin.getline(nome,50);// não esquecer de saber o limite do vetor ultilizado!
//
//	cout << endl << "Que conceito você merece?: ";
//	cin >> nota;
//	cout << endl << "Bom dia, " << nome << ". Seu conceito é " << (char)(nota + 1);
//	/*Ultilizando type cast no modelo C, e ultilizando aspas para isolamento de operação aritmética(T mudo!!)*/
//
//}