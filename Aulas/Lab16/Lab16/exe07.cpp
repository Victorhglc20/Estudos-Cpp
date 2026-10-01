//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int i;
//	int j = 0;
//	int tam=0;
//	char p1[15];
//	char p2[15];
//	char p3[15];
//	char p4[15];
//	cout << "Digite quatro palavras:\n";
//	cin >> p1>>p2>>p3>>p4;
//	cout << "Concatenando as palavras obtém-se:";
//	
//	for ( i = 0;p1[i] != '\0';i++)
//		tam++;
//	for ( i = 0;p2[i] != '\0';i++)
//		tam++;
//	for ( i = 0;p3[i] != '\0';i++)
//		tam++;
//	for ( i = 0;p4[i] != '\0';i++)
//		tam++;
//
//	char* vet = new char[15];
//
//	for (i = 0;p1[i] != '\0';i++)
//	{
//		vet[j] = p1[i];
//		j ++;
//	}
//	
//	vet[j] = ' ';
//	j++;
//
//	for (i = 0;p2[i] != '\0';i++)
//	{
//		vet[j] = p2[i];
//		j++;
//	}
//	
//	vet[j] = ' ';
//	j++;
//
//	for (i = 0;p3[i] != '\0';i++)
//	{
//		vet[j] = p3[i];
//		j++;
//	}
//	
//	vet[j] = ' ';
//	j++;
//
//	for (i = 0;p4[i] != '\0';i++)
//	{
//		vet[j] = p4[i];
//		j++;
//	}
//	//cout << tam << endl;
//	//cout << "Tamanho do vetor "<<sizeof(*vet);// sizeof mede o tamnho do endereço, no caso vet é um endereço de um ponteiro
//	//cout << endl << "Tamanho das palavras:"
//		//<< sizeof(p1) << endl << sizeof(p2) << endl << sizeof(p3) << endl << sizeof(p4);
//	vet[j] = '\0';
//	cout << vet;
//}