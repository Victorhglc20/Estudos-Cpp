//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char meses [12][10] = {"Janeiro","Fevereiro","Março","Abril","Maio",
//	"Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"};
//	int vendas[12];
//	int total=0;
//	const char* ptr=meses[0];
//
//	cout << ptr+10;//cout trata vetore lendo apartir do endereço do primeiro elemento até encontra o caractere nulo'\0'
//	cout << "Digite o número de livros vendidos:\n";
//	for (int i = 0;i < 12;i++)
//	{
//		cout << ptr + (i * 10) << ": ";
//		cin >> vendas[i];
//	}
//	for (int i = 0; i < 12;i++)
//		total += vendas[i];
//
//	cout << "Em um ano foram vendidos "<<total<< " livros.";
//	
//}