//#include <iostream>
//using namespace std;
//
//struct carro {
//	char fabri[10];
//	int ano;
//};
//
//int main()
//{
//	int tam = 0;
//	cout << "Quanto carros para catalogar?: ";
//	cin >> tam;
//	
//	carro* automo = new carro[tam];
//	
//	for (int i = 0; i < tam;i++)
//	{
//		cout << "\nCarro #" << 1+i;
//		cout << "\n\nMarca: ";
//		cin >> automo[i].fabri ;
//		cout << "\nAno:";
//		cin >> automo[i].ano;
//	}
//
//	cout << "\nAqui esta sua coleção:\n\n";
//	for (int i = 0; i < tam;i++)
//		cout << automo[i].ano << " " << automo[i].fabri<<endl;
//
//}