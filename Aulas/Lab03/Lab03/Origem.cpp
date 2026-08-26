// constvar.cpp – exemplifica o uso de constantes
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
	/*float altura=1;
	float largura=1;
	float comprimento=1;

	while (altura != 0 && largura != 0 && comprimento != 0) {
		cout << "Entre com a altura, largura e comprimento:" << endl;

		cin >> altura;
		cin >> largura;
		cin >> comprimento;
		float resultado = altura * largura * comprimento;

		cout << "O volume: " << resultado << endl;
	}*/
	//------------------------------------------------------------------------------------------------


	// ao compilador se deparar com a pontuação em meio ao input do usuario ele irá interromper,,
	//pois considera o char um caractere alienigena para o tipo inteiro das horas!!
	//e lerá o proximo assim como se desse espaço ou enter
	/*int horas;
	int minutos;;
	char f;
	cout << "que horas sao?" << endl;
	cin >> horas >> f >> minutos;
	cout << horas << " Horas!"<<endl;
	cout << minutos << " Minutos!"<<endl;*/

	//-----------------------------------------------------------------------------------------------

//	int segundos, minutos;
//	cout << "Digite uma quantidade de minutos :" << endl;
//
//	cin >> minutos;
//		segundos = 60 * minutos;
//		 
//
//	cout << "Existem " << segundos << " segundos em "<< minutos << " minutos"<<endl;
//		
//
//		system("pause");
//		return 0;
//
		
//-------------------------------------------------------------------------------------------------
	/*int medida, dobro, quadrado;
	cin >> medida;
	
	dobro = medida * 2;
	quadrado = medida * medida;
	
	cout << "Medida: " << medida << endl;
	cout << "Dobro: " << dobro << endl;
	cout << "Quadrado " << quadrado << endl;*/
//-------------------------------------------------------------------------------------------------



	//int idade, dias;

	//cout << "digite sua idade: "<< endl;
	//cin >> idade;
	//dias = idade * 365;

	//cout << idade << " anos equivalem a " << dias << " dias!"<<endl;

//-------------------------------------------------------------------------------------------------



	//int tempo,dias,cdias;
	//float preco,gasto, ctotal;

	//cout << "A quantos anos vc fuma?"<<endl;
	//cin >> tempo;
	//cout << "Quantos cigarros vc fuma por dia?" << endl;
	//cin >> cdias;
	//cout << "Qual o preco medio de uma carteira de cingaros(que da curse)?" << endl;
	//cin >> preco;


	//dias = tempo * 365;
	//ctotal = cdias * dias;
	//// valor arredondado por motivo de lógica, afinal não tem como comprar uma fração de um carteira!
	//int carteira = ceil(ctotal / 20);

	//gasto = carteira * preco;

	//cout << "Vc gastou ate agora: " << gasto << " reais com o mardito!!!"<<endl;

//-------------------------------------------------------------------------------------------------
	//int n;

	//
	//cout << "Entre com um numero de (0 a 9):" << endl;
	//cin >> n;
	//cout << "Tabuada de " << n << endl;
	//for (int i = 0; i <= 10; i++)
	//{
	//	int r;
	//	r = n * i;
	//	cout << n << "x" << i << " = " << r << endl;
	//}

//-------------------------------------------------------------------------------------------------		

//char f;
//
//float cco, cci, nat,kg,h, m, total;
//
////#################################################################
//cout << "Digite seu peso em kg: " << endl;
//cin >> kg;
////#################################################################
//cout << "Digite o tempo de corrida: " << endl;
//cin >> h >> f >> m>>f;
//m += (h * 60);
//cco =7*kg*(m/60);
////#################################################################
//cout << "Digite o tempo de ciclismo: " << endl;
//
//cin >> h >> f >> m>>f;
//m += (h * 60);
//cci = 7 * kg * (m / 60);
//
////#################################################################
//cout << "Digite o tempo de natacao: " << endl;
//cin >> h >> f >> m>>f;
//m += (h * 60);
//nat = 8 * kg * (m / 60);
//
//total= cco + cci + nat;
//cout << "gasto de caloria: " << total << endl;
//	
//-------------------------------------------------------------------------------------------------
//float imp,dis,car,res;
//
//imp = 0.45;
//dis = 0.28;
//car = 60000;
//cout << "Custo de fabrica: " << car << endl;
//
//res = (car * imp) + (car * dis) + car;
//
//
//cout << "Custo do consumidor: " << res << endl;
//QUASE FIZ UMA CONTA DESNESSÁRIA NA PERCENTAGEM!!!!!!!
//-------------------------------------------------------------------------------------------------

//char  f;
//int h, m;
//cout << "Que horas sao?: ";
//cin >> h >> f >> m;
//cout <<"O seu relogio esta atrasado!"<<endl;
//h++;
//cout << "Agora sao " << h << f << m;

//-------------------------------------------------------------------------------------------------
float a, b, area, h, v;
	
cout << "Insira o valor do lado a do retangulo: ";
cin >> a;
cout << "Insira o valor do lado b do retangulo: ";
cin >> b;
area = a * b;
cout << "Area da base: "<<area<<endl;
cout << "Insira o valor da altura do retangulo: " ;
cin >> h;
v = area * h;
cout << "Volume do prisma = " << v;

// ACABOOOOOOOOOOOOOOOOOOUU!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

}