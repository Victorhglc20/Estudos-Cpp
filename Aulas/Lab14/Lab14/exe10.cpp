//#include <iostream>
//using namespace std;
//
//enum estado { vazia, cheia };
//enum alimento { sopa=2, canja=3 };
//
//
//
//struct tigela {
//	
//	estado estado;
//	alimento alimento;
//
//};
//void fome(tigela*);
//
//
//
//int main()
//{
//	tigela almo = {cheia,sopa};
//	tigela* palmo = &almo;
//	
//	char pa[4][10] = {
//		"vazia","cheia","sopa","canja"
//	};
//
//	cout << "antes do almoço a " << pa[almo.alimento] << " estava " << pa[almo.estado] << endl;
//	
//	fome(palmo);
//	
//	cout << "agora ela a tigela de " << pa[almo.alimento] << " está " << pa[almo.estado];
//
//}
//
//void fome(tigela* a)
//{
//	a->estado= vazia;
//}