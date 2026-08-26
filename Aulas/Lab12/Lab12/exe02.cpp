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
//istream& operator>>(istream&, complexo&);
//
//complexo operator*(complexo, complexo);
//
//ostream& operator<<(ostream&, complexo&);
//
//complexo operator+(complexo, complexo);
//
//
//int main()
//{
//	cout << "Digite os números complexos!";
//
//	complexo c1 ;
//	complexo c2 ;
//	cin >> c1;
//	cin >> c2;
//
//
//
//	complexo c = c1+ c2;
//	complexo d = c1* c2;
//	cout << c;
//	cout << endl;
//	cout << d;
//}
//
//complexo operator+(complexo a, complexo b)
//{
//	complexo c;
//	c.real = a.real + b.real;
//	c.img = a.img + b.img;
//
//	return c;
//
//}
//
//complexo operator*(complexo a, complexo b)
//{
//
//	complexo c;
//	c.real = (a.real * b.real) - (a.img * b.img);
//	c.img = (a.img * b.real) + (a.real * b.img);
//
//	return c;
//
//}
//
//
//ostream& operator<<(ostream& os, complexo &c)
//{
//	os << c.real;
//	os << showpos;
//	os << c.img;
//	os << noshowpos;
//	os << "i";
//	return os;
//}
//
//istream& operator>>(istream& is, complexo& temp)
//{
//	
//	cin >> temp.real;
//	cin >> temp.img;
//	cin.ignore();
//
//	return is;
//}