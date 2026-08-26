//#include <iostream>
//#include<cmath>
//using namespace std;
//
//double bask(double,double,double);
//
//
//int main()
//{
//	double a = 2.0;
//	double b = -3.0;
//	double c = -5.0;
//
//	cout << "Digite os membros A, B e C de uma equação quadrática!"<<endl;
//	//cin >> a;
//	//cin >> b;
//	//cin >> c;
//	
//	bask(a,b,c);
//
//}
//
//double bask(double a, double b, double c)
//{
//
//	double delta=pow(b,2.0)-4.0*(a*c);
//	cout << delta<<endl<<endl;
//
//	if(delta>0.0)
//	
//	{
//		double raiz1 = (-b + sqrt(delta));
//		raiz1 = raiz1 / (2.0 * a);
//
//
//		double raiz2 = (-b - sqrt(delta));
//		raiz2 = raiz2 / (2.0 * a);
//
//
//
//		cout << "O resultado da primeita raiz: " << raiz1;
//		cout << endl;
//		cout << "O resultado da segunda raiz: " << raiz2;
//
//	}
//
//
//		else if (delta < 0.0)
//	{
//		cout << "Não há raíz real para o problema!!";
//	}
//
//
//		else
//	{
//
//		double raiz1 = (-b + sqrt(delta));
//		raiz1 = raiz1 / (2.0 * a);
//
//		//double raiz1 = (-b + sqrt(delta)) / 2.0 * a; // ele já chagava dividindo por 2 e multiplicando, requer 
//		// parenteses para manter a ordem correta 
//
//		cout << "O resultado é a raiz: " << raiz1;
//	}
//
//	return 0.0;
//}