//#define _USE_MATH_DEFINES
//#include <iostream>
//#include <cstdlib>
//#include <windows.h>
//#include <ctime>
//#include <cmath>
//#include <math.h>
//#include<stdlib.h>
//#include <iomanip>// NECESSARIO PARA USAR --> setprecision(3)
//using namespace std;
////_________________________________________________________________________________
//// FUNÇÕES
//
//float media(int a,int b);
//double VolumeCilindro(float a, float b);
//
//
////_________________________________________________________________________________
//
//int main()
//{
//	//float graus, radianos, resultado;
//
//	//cout << "Digite um angulo: ";
//	//cin >> graus;
//
//	//radianos = graus * (M_PI/180);
//	//cout << sin(radianos);
//
//	///*cout << sin(graus);*/
//	
//	/*int a, b;
//	cout << "digite dois inteiros: ";
//	cin >> a >> b;
//	cout << endl << "A media dos valores: " << media(a, b);*/
//
//	
//	float r, h;
//
//	cout << "Entre com o raio da base: ";
//	cin >> r;
//	cout << endl << "Entre com a altura: ";
//	cin >> h;
//	cout << fixed << setprecision(3);
//	/* setprecision(3)<-NECESSÁRIO PARA EXIBIR MAIS CASAS DECIMAIS APÓS O 0*/
//
//	cout << "O volume do cilindro eh: "<<VolumeCilindro(r,h);
//
//
//
//
//
//
//
//}
//
//
//float media(int a,int b)
//{
//	return static_cast<float>(a + b) / 2;
//	/*
//	esta função ->static_cast<float>()<- transforma o valor para uma tipo 
//	float, impossivel fazer esse tipo de conta com o int pois ele trunca o
//	valor antes do mesmo virar float
//	*/
//}
//
//double VolumeCilindro(float a, float b)
//{
//	double pi = 3.14159f;
//	double resul;
//	a= static_cast<double>(a);
//	b= static_cast<double>(b);
//	resul = pi * pow(a, 2)* b;
//
//
//
//	return resul;
//}