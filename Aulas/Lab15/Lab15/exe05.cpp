//#include <iostream>
//using namespace std;
//
//struct carro {
//
//	char modelo[10];
//	int ano;
//	double preco;
//
//};
//
//double precar(carro*);
//
//int main()
//{
//	carro estatico[10] = {// vetores normais se ultiliza "={}" para inicializar imediatamente
//		{"Vectra", 2009, 58'000.00},
//		{"Polo", 2008,45'000.00}
//	};
//	
//	carro* carros = new carro[10]//era um vetor estático mas sem problema
//		{
//	
//			{"Vectra", 2009, 58'000.00},// é vírgula kkkk
//
//			{"Polo", 2008,45'000.00}
//
//		};
//
//	carro* pcar = new carro{carros[1]};
//	carro* pest = new carro{estatico[1]};
//	carro* carteste = new carro{"teste",2222,20'222.00};
//	/*o apelido de um vetor representa o endereço de memória do primeiro elemento
//	por ja ser um endereço fica redundante o uso do &
//	TESTES:
//	cout << endl<<carteste->modelo;
//
//	cout << endl << (*carteste).modelo;
//
//	cout << endl << estatico[0].modelo;
//
//	cout << endl << (*(estatico+0)).modelo;
//
//	cout << endl << (*(estatico + 1)).modelo;
//	*/
//	cout << "Dinâmico inicializado: "<<endl<< pcar->modelo << endl << pcar->ano << endl << pcar->preco;
//	cout << endl<< "Estático inicializado: " << endl << pest->modelo << endl << pest->ano << endl << pest->preco;
//	cout << endl << endl << "Entre com os dados de 2 carros:\n";
//	cin >> carros[2].modelo >> (*(carros + 2)).ano >> (*(carros + 2)).preco;
//	cin >> carros[3].modelo >> (*(carros + 3)).ano;
//	cin >> carros[3].preco;// o ponteiro interage com o código da mesma maneira de um operador aritimético!!
// // ou seja ele verifica tipos de numeos e causa converções, por exemplo na entrada anterior, 
// //por ter valores do tipo int o compilador arredondava a variavel preco ja na entrada!@!!!!!!1 
//	cout << endl<< carros[2].modelo << " " << (*(carros + 2)).ano <<" " << carros[2].preco;
//	cout << endl<< carros[3].modelo << " " << (*(carros + 3)).ano << " " << carros[3].preco;
//
//	cout << endl<< "O preço dos dois carros cadstrados é de: "<<precar(carros);
// 
// delete carros;
//}
//
//double precar(carro* car)
//{
//	return car[2].preco+car[3].preco;
//}