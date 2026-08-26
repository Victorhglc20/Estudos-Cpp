//#include <iostream>
//using namespace std;
//
//int main() 
//{
//	/*o exercicio quer que descubra o que acontece quando se tenta inicializer um vetor de caracteres que não
//	é uma string( o que determina que um vetor de caractere é uma string é a preseça do /0 no final do conjunto
//	o que indica ao compilador o final do texto), para isso será criado dois vetores onde um será atribuido 
//	ultilizando uma cadeia de caracteres("aspas duplas") e outro identificando entre aspas simples e virgula 
//	e no final exibir*/
//
//	char teste1[7] = "string";
//	char teste2[7] = {'s','e','m',' ','s','t','r'};
//
//	cout << endl << teste1 << endl << endl;
//	cout << teste2;
//
//	/*Pra dar o efeito de erro desejado os vetores precisão estar com o tamanho exato do texto
//	(lembrando que o string tem o /0 no final que conta no vetor), sem o 0/ o cout continua a leitura pelo 
//	endereço de memória até encontrar um pedaço da memória zerado onde ele interpreta como final da leitura,
//	por enquanto isso não ocorre ele exibe lixo da memoria, o que pode tbm acontecer que durante a leitura 
//	seja exibido o outro valor de uma variavel pelo fato do visual studio colocar as variaves perto uma
//	da outra!*/
//}