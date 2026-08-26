//#include <iostream>
//using namespace std;
//
//
//struct complexo
//{
//	float real;
//	float img;
//};
//
//complexo ler();
//
//complexo mult(complexo, complexo);
//
//void exibir(complexo);
//
//complexo soma(complexo, complexo);
//
//
//int main()
//{
//	cout << "Digite os números complexos!";
//	
//	complexo c1 = ler();
//	complexo c2 = ler();
//
//	
//
//	complexo c = soma(c1,c2);
//	complexo d = mult(c1,c2);
//	exibir(c);
//	cout << endl;
//	exibir(d);
//}
//
//complexo soma(complexo a, complexo b)
//{
//	complexo c;
//	c.real= a.real + b.real;
//	c.img = a.img + b.img;
//
//	return c;
//
//}
//
//complexo mult(complexo a, complexo b)
//{
//
//	complexo c;
//	c.real = (a.real * b.real) - (a.img*b.img);
//	c.img = (a.img*b.real) + (a.real*b.img);
//
//	return c;
//
//}
//
//
//void exibir(complexo c)
//{
//	cout << c.real;
//	cout << showpos;
//	cout << c.img;
//	cout << noshowpos;
//	cout << "i";
//}
//
//complexo ler()
//{
//	complexo d;
//	cin >> d.real;
//	cin >> d.img;
//	cin.ignore();
//
//	return d;
//}