//#include <iostream>
//using namespace std;
//
//union cor{
//	struct  {
//		int r;
//		int g;
//		int b;
//		int a;
//	} rgba ;
//	int i32;
//};
//
//void frgba(cor*);
//void fi32(cor*);
//
//int main()
//{
//	cor teste1;
//	cor* pteste1 = &teste1;
//	cor teste2;
//	cor* pteste2 = &teste2;
//	cout << "Digite uma cor no formato " << endl << "RGBA: ";
//	frgba(pteste1);
//	cout << endl << "Int32: ";
//	fi32(pteste2);
//	cout << endl << "Teste rgba: " << teste1.rgba.r << " " << teste1.rgba.g << " " <<
//		teste1.rgba.b << " " << teste1.rgba.a << endl;
//
//	cout << "Teste Int 32 bit: " << teste2.i32;
//	
//}
//
//void frgba(cor* a)
//{
//	cin >> a->rgba.r >>a->rgba.g>> a->rgba.b>> a->rgba.a;
//
//}
//void fi32(cor* a)
//{
//	cin >> a->i32;
//}