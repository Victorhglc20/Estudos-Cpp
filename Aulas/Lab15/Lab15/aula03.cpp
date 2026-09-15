//#include <iostream>
//using namespace std;
//
//struct jogador {
//	char nome[20];
//	float salario;
//	float altura;
//};
//int main()
//{
//	//Um ponteiro pode ser usado como um vetor!
//	int* pvet = new int[10];
//
//	pvet[0] = 15;
//	cout << pvet[0];
//	pvet[1] = pvet[0] + 5;
//
//	//Um vetor pode ser usado como um ponteiro!
//	//O nome de um vetor estático é um endereço - Mas ele não pode ser alterado! 
//
//	int vet[10];
//	*vet = 15;				// vet[0] =15;
//	cout << *(vet + 0);		// cout << vet[0];
//	*(vet + 1) = *vet + 5;	// vet[1] = vet[0]+5;
//
//	int vet2[3];
//
//	vet2[0] = 15;	// *(vet+0) ou *vet
//	vet[1] = 20;	//*(vet+1)
//	*(vet + 2) = 30;//vet[2]
//
//	cout << vet[1];		//20
//	cout << *(vet + 1);	//20
//
//	//INVÁLIDO: vet = vet + 1; // são apenas endereços 
//
//	//O operador new também permite criar registros dinâmico
//	//O operador membro (.) não pose ser usado com ponteiros 
//	//A linguagem oferece o operador(->)
//
//	jogador j;
//
//	cin >> j.nome;
//	cin >> j.salario;
//	cin >> j.altura;
//
//	jogador* pj = new jogador;
//
//	cin >> pj->nome;	//(*pj).nome
//	cin >> pj->salario;	//(*pj).salario
//	cin >> pj->altura;	//(*pj).altura
//	
//}