//#include <iostream>
//using namespace std;
//
//
//long long calculo(long long, long long);
//
//
//int main()
//{
//	long long resultado = 200530ll * 420800;
//	cout << "Direto: " << resultado << endl;
//	cout << "Função: " << calculo(200530, 420800) << endl;
//	return 0;
//}
//
///* Por padrão o compilador armazena o valor como int, oq que pode levar um estouro no valor
//* por ele considerar antecipadamente a tipagem no cálculo, uma caracteristica do compilador do c++
//* para prover performace. 
//
//* Para indicar ao compilador que o valor requere mais espaço, ou sua tipagem para evitar
//* algum equivoco no cálculo, pode se usar um súfixo, L(long); UL(unsigned long); LL(long long). 
//
//* No caso da função, ele ja esta preparado pera interface da mesma, os valores que se espera e que
//* receberá, calculando da maneira correta e imprimindo a resposta sem nenhum estouro!
//
//*/
//
//long long calculo(long long a, long long b)
//{
//	return a * b;
//}
