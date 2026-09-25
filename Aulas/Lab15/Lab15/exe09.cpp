//#include <iostream>
//using namespace std;
//
//struct local {
//	char nome[10];
//	char pais[10];
//	char continente[10];
//};
//
//int main()
//{
//	int tam = 0;
//	cout << "Quantos locais deseja visitar? ";
//	cin >> tam;
//	local* prog = new local[tam];
//	cout << "Digite o nome, país e continente para cada local: "<<endl;
//	for (int i = 0;i < tam;i++)
//	{
//		cin >> prog[i].nome >> prog[i].pais >> prog[i].continente;
//	}
//	cout << "Os locais selecionados foram:"<<endl;
//	for (int i = 0;i < tam;i++)
//	{
//		cout << prog[i].nome<<" " << prog[i].pais <<" " << prog[i].continente
//			<<endl;
//		
//	}
//	delete prog;
//
//}