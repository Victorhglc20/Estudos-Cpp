//#include <iostream>
//using namespace std;
//
//
//struct cale{
//	int dia;
//	int mes;
//	int ano;
//};
//
//struct hora {
//	int hor;
//	int min;
//};
//
//struct even {
//	cale calen;
//	hora horario;
//	char desc[30];
//};
//
//
//int main()
//{
//	even eventos[10];
//	cout << " Entre com 2 eventos:" << endl << "#1" << endl
//		<<"Data: ";
//	cin >>eventos[0].calen.dia>> eventos[0].calen.mes>> eventos[0].calen.ano;
//	cout <<endl<< "Hora: ";
//	cin >> eventos[0].horario.hor >> eventos[0].horario.min;
//	cin.ignore();
//	cout << endl << "Desc: ";
//	cin.getline(eventos[0].desc,29);
//
//	cout << " Entre com 2 eventos:" << endl << "#2" << endl
//		<< "Data: ";
//	cin >> eventos[1].calen.dia >> eventos[1].calen.mes >> eventos[1].calen.ano;
//	cout << endl << "Hora: ";
//	cin >> eventos[1].horario.hor >> eventos[1].horario.min;
//	cin.ignore();
//	cout << endl << "Desc: ";
//	cin.getline(eventos[1].desc, 29);
//
//	cout << endl << "---------------------------------------"<<endl;
//	cout << "Eventos Cadastrados" << endl
//		<< eventos[0].calen.dia << "/" << eventos[0].calen.mes << "/" << eventos[0].calen.ano <<
//		" " << eventos[0].horario.hor << ":" << eventos[0].horario.min << " " << eventos[0].desc<<endl;
//	cout <<  eventos[1].calen.dia << "/" << eventos[1].calen.mes << "/" << eventos[1].calen.ano <<
//		" " << eventos[1].horario.hor << ":" << eventos[1].horario.min << " " << eventos[1].desc << endl;
//}