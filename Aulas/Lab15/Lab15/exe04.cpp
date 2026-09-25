//#include <iostream>
//using namespace std;
//
//struct balao
//{
//	float diametro; // diâmetro em metros
//	char marca[20]; // nome da marca
//	int modelo; // número do modelo
//};
//
//
//int main()
//{
//	
//	balao* bexiga = new balao;
//	cout << "Entre com o diâmetro do balão: ";
//	cin >> bexiga->diametro;
//	cout << endl << "Entre com o nome da marca:";
//	cin.ignore();// limpe antes da função verifcar o buffer do teclado!!!
//	cin.getline(bexiga->marca,20);
//	
//	cout << endl << "Entre com número do modelo: ";
//	cin >> bexiga->modelo;
//	cout << "Confime\nDiâmetro: " << bexiga->diametro << endl << "Marca: " << bexiga->marca <<
//		endl << "Modelo: " << bexiga->modelo;
// delete bexiga;
//
//}