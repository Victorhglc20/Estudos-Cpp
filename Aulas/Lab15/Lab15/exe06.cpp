//#include <iostream>
//
//using namespace std;
//
//
//struct aluno {
//	union ident {
//		char nome[10];
//		int matricula;
//	}id;
//	unsigned cod;
//	enum situ{
//		Aprovado,Trancado,Reprovado
//	}teste;
//
//};
//
//void mostrar(aluno*);
//int main()
//{
//	int situ = 0;
//	int tam = 10;
//	cout << "Digite o número de alunos: ";
//	cin >> tam;
//	aluno* alunos = new aluno[tam];
//	cout << "Digite os dados do primeiro aluno: \n";
//	cin >> alunos[0].id.matricula >> alunos[0].cod >>situ;
//	alunos[0].teste = static_cast<aluno::situ>(situ);
//
//	mostrar(alunos);
//	
//	delete alunos;// lembrar do delete mds
//
//}
//
//void mostrar(aluno*alu)
//{
//	cout << alu[0].id.matricula	;
//	cout <<endl<< alu[0].cod;
//	switch (alu[0].teste) {
//		case aluno::Aprovado:
//				cout << "\nAprovado";
//			break;
//		case aluno::Reprovado:
//			cout << "\nReprovado";
//			break;
//		case aluno::Trancado:
//			cout << "\nTrancado";
//			break;
//	}
//		
//		 
//}