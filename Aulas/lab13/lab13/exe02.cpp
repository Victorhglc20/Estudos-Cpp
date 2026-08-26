//#include <iostream>
//using namespace std;
//enum meses { Jan = 1, Fev, Mar, Abr, Mai, Jun, Jul, Ago, Set, Out, Nov, Dez };
//
//istream& operator>>(istream&, meses&);
//ostream& operator<<(ostream&, meses&);
//
//int main()
//{
//	meses inicio, fim;
//	inicio = Mar; // inicio do semestre
//	fim = Jun; // fim do semestre
//	cout << "Digite o número do mês atual: ";
//	
//	meses atual;
//	cin >> atual;
//	
//	if (atual >= inicio && atual <= fim)
//	{
//		cout << "Você está em período de aulas.\n";
//		cout<< atual;
//	}else
//	{
//		cout << "Férias!\n";
//		cout << endl << atual;
//		return 0;
//	}
//}
//
//istream& operator>>(istream& is, meses& m)
//{
//	int temp;// o is é a informação do usuario assim como o cin fora da função! 
//	is >> temp;
//	m = (meses)temp;// nao se pode atribuir temp para a pois um é um inteiro e outro é do tipo mes
//	// mas o eunm é compativel com o int, e usando type cast da para fazer a atribuição 
//	return is;// obrigatório retornar o is
//}
//
//
//ostream& operator<<(ostream& os, meses& m)
//{
//	
//	
//	switch ((int)m)
//	{
//	case 1: os << "Jan";
//		  break;
//	case 2: os << "Fev";
//		break;
//	case 3: os << "Mar";
//		break;
//	case 4: os << "Abr";
//		break;
//	case 5: os << "Mai";
//		break;
//	case 6: os << "Jun";
//		break;
//	case 7: os << "Ago";
//		break;
//	case 8: os << "Set";
//		break;
//	case 9: os << "Out";
//		break;
//	case 10: os << "Nov";
//		break;
//	case 11: os << "Dez";
//		break;
//	case 12: os << "Jan";
//		break;
//
//	}
//	
//	return os;
//
//	/*
//	os significa cout da mesma forma que o is na função significa cin
//	ou seja ultiliza-se da mesma forma!
//	por exemplo:
//
//	cout << "Janeiro!";
//	dentro da função ficaria
//	os << "Janeiro";
//	NADA MUDA
//	não precisa cria vetor de char nem nada!
//	char burrice[10]={"burro"};
//	os<< burrice;
//	não funciona obviamente!!!
//	*/
//
//}