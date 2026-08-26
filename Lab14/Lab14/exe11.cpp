//#include <iostream>
//using namespace std;
//
//struct hrr {
//	int hora;
//	int minu;
//};
//void MostrarHrr(hrr*);
//
//int main()
//{
//	hrr usu;
//	hrr* pusu=&usu;
//	char l;
//	cout << "Que hora são?: ";
//	cin >> usu.hora >> l>>usu.minu;
//	MostrarHrr(pusu);
//
//
//}
//// a diferença de . e ->, é sobre como o membro está sendo acessado, os campos de um registro é acessado pelo 
//// operador (.), e o campo de um ponteiro para um registro usa operador(->), como um identificador.
//void MostrarHrr(hrr* h)
//{
//	
//	cout << ++h->hora << ":" << h->minu;
//}