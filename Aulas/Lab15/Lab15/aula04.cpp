#include <iostream>
using namespace std;

struct jogador
{
	char nome[20];
	float salarios;
	unsigned gols;
};
int main()
{
	jogador* pbeb = new jogador;
	cout << "Digite nome, dalpario e gols do jogador";
	cin >> pbeb->nome >> pbeb->salarios >> pbeb->gols;
	/*
		Atribuição a um registro dinâmico:

		jogador * prom = new jogador;

		strcpy(prom->nome,"Romario");
		prom->salario =300000;
		prom->gols=800;
		
		*/

	cout << "Contratação para o próximo ano:\n" << pbeb->nome
		<< "por " << pbeb->salarios<<" Reais\n";

	delete pbeb;
}