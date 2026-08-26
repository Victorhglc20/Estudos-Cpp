#include <iostream>
using namespace std;

enum tipagem{JPG,PNG,BMP};

struct imagem {
	char nome[10];
	float altu;
	float larg;
	tipagem tipo;
};

void detaimg(imagem*);

int main()
{
	imagem img = {
		"backg.png",
		1080,
		1920,
		PNG
	};
	imagem* pimg = &img;

	detaimg(pimg);

	
}


void detaimg(imagem* a)
{
	char tipos[3][4] = {
		"JPG",
		"PNG",
		"BMP"
	};
	cout << "A imagem " << a->nome << " com o tamanho de " << a->larg << "x" << a->altu << " possui formato " 
		<< tipos[a->tipo];
}