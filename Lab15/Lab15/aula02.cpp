//#include <iostream>
//using namespace std;
//
//int main()
//{
//	double* triplo = new double[3];// cria o ponteiro triplo e aloca memória par um vetor dinâmico
//	triplo[0] = 0.2; //inicializa valores!
//	triplo[1] = 0.5;
//	triplo[2] = 0.8;
//
//	cout << "triplo[1} = " << triplo[1] << endl;// Imprime na tela o valor do segundo elemento do vetor
//	triplo = triplo + 1; //Ao somar valor a um ponteiro de vetor dinâmico, ele incrementa proporcionalmente 
//	// aos bytes no endereço de memória(soma= 1 * double = 8 bytes, soma = 2 * double =16),o que resulta
//	// em o ponteiro apontando para o proxímo elemento do vetor!.
//	cout << "Agora triplo[0] = " << triplo[0] << endl;// Posição 0 sempre é a memória em que o ponteiro está apontando
//
//	cout << "Agora triplo[1] = " << triplo[1] << endl;
//	triplo = triplo - 1;// antes de dar delete voltar a posição do ponteiro para que a memória 
//	// inicial de triplo[0] seja liberada.
//
//	delete[]triplo;// delete do vetor. Ele não avisa quando não da delete.
//}