//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//struct jogador {
//	char  nome[40];
//	float salario;
//	unsigned gols;
//};
//
//void exibir(jogador);
//jogador ler();
//
//int main()
//
//{
//	cout << "Digite infos sobre o jogador:\n";
//	jogador beb = { "bebedouro", 2400 , 12 };
//	//jogador beb = ler();
//	strcpy(beb.nome, "Zica");
//	// NA DECLARAÇÃ0 POSE SE INICIALIZAR UM VETOR DE CHAR NORMALMRNTE COMO UMA STRING, SÓ QUANDO
//	// FOR ALTERAR O STRING DEVERÁ SER ULTILIZADO O STRCPY COM O INCLUDE DE CSTRING
//	exibir(beb);
//
//	jogador rom = beb;
//	cout << endl;
//	exibir(rom);
//
//
//}
//
//void exibir(jogador j)
//{
//	cout << j.nome << " "
//		<< j.salario << " "
//		<< j.gols << endl;
//}
//
//
//jogador ler()
//{
//	jogador temp;
//
//
//	cin >> temp.nome;
//	cin >> temp.salario;
//	cin >> temp.gols;
//
//	return temp;
//}