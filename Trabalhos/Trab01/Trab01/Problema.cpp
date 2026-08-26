#include <iostream>
#include "Binario.h"
#include "Genetico.h"
#include "imprimir.h"
#include "problema.h"

#include "resol.h"
#define black   "\033[7;37;40m" 
#define yellow  "\033[1;33;44m" 
#define green   "\033[32m" 
#define red     "\033[4;31m"
#define foreg   "\033[38;5;154m" 
#define backg   "\033[38;5;0;48;5;154m" 
#define default "\033[m" 
using namespace std;
// N/A identação
int main()
{
	
		input = 0;
		um = 60504;
		dois = 25000;
		tres = 12329;
		quatro = 38054;
		cinco = 1259;
		seis = 732;
	


		cout << "Digite 6 solucoes!:" << endl;
		cin >> um;
		cin >> dois;
		cin >> tres;
		cin >> quatro;
		cin >> cinco;
		cin >> seis;
	//---------------------------------------------------------------	
		
		if (imprimir(um))
			cout <<green<< "OK"<<default;
		else
			cout << red << "X"<<default;

		if (imprimir(dois))
			cout << green << "OK" << default;
		else
			cout << red << "X" << default;

		if (imprimir(tres))
			cout << green << "OK" << default;
		else
			cout << red << "X" << default;

		if (imprimir(quatro))
			cout << green << "OK" << default;
		else
			cout << red << "X" << default;

		if (imprimir(cinco))
			cout << green << "OK" << default;
		else
			cout << red << "X" << default;

		if (imprimir(seis))
			cout << green << "OK" << default;
		else
			cout << red << "X" << default;
//---------------------------------------------------------------
		cout << endl << endl << endl;
		
		if (imprimir(pu(um, dois)))
			cout << green << "OK" << default;
		else
			cout << red << "X" << default;

		if (imprimir(arit(tres, quatro)))
			cout << green << "OK" << default;
		else
			cout << red << "X" << default;

		if (imprimir(mutSim(cinco, 9)))
			cout << green << "OK" << default;
		else
			cout << red << "X" << default;

		if (imprimir(mutDup(seis)))
			cout << green << "OK" << default;
		else
			cout << red << "X" << default;

		cout << endl << endl << endl;
	
		system("pause");
	
	

	





}










//cout << "Entre com 6 valores iniciais(numeros entre 0 e 65535):"<<endl;
//
//	cin >> input;
//		um = input;
//	
//		cin >> input;
//			dois = input;
//
//			cin >> input;
//				tres = input;
//
//				cin >> input;
//					quatro = input;
//
//					cin >> input;
//						cinco = input;
//
//						cin >> input;
//							seis = input;







//cout << testar(3,dois);
			
//cout << pu(um, dois) << endl;
//cout << arit(tres, quatro) << endl;
//cout << mutSim(cinco,9) << endl;
//cout << mutDup(seis) << endl;



//resol(um,dois,tres,quatro,cinco,seis);



/*cout << "teste:"<<endl<<
		(int)um << endl<<
			(int)dois << endl<<
					(int)tres << endl<<
				(int)quatro << endl<<
			(int)cinco << endl<<
		(int)seis << endl;*/