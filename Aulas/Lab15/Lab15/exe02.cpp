//#include <iostream>
//using namespace std;
//
//struct peixe
//{
//	char tipo[20];
//	float peso;
//	unsigned comp;
//	
//};
//
////protótipo da função!
//
//float funcp(peixe*);// recebendo um ponteiro para peixe!!! Pois o vetor dinâmico aponta para o primeiro elemento
//
//int main()
//{
//	
//	int tam = 0;
//	peixe pescados = {"Piaba",6.7,8};// Demonstração
//
//	peixe* pp = &pescados;// segunda demonstração
//	
//	cout << "Digite o tamanho do vetor!";
//	cin >> tam;
//
//	peixe* vpp = new peixe[tam];
//	vpp[0] = pescados;
//	vpp[1] = pescados;
//
//	cout << funcp(vpp);
//
//	delete vpp;
//	
//
//	// o vpp esta armazendando apenas o endereço do inicio do vetor de peixe,
//	// Não é um vetor de ponteiros!, é um vetor de peixes alocados dinamicamente
//	// ou seja na heap, continuam sendo do tipo peixes e são acessados diretamente
//	// atraves do operador de membro(.)
//	
//
//	/*cout << "Tipo: ";
//	cin >> vpp[1].tipo;
//	cout << endl << "Peso: ";
//	cin >> vpp[1].peso;
//	cout << endl << "Comprimento: ";
//	cin >> vpp[1].comp;
//
//	cout << "O peso do peixe é " << vpp[1].peso << " kilogramas.";*/
//
//
//	
//}
//
//float funcp(peixe*a)
//{
//	return (*(a+1)).peso;// uso de pareteses para aritimetica, prioridades no calculo
//	//se quiser alterar o indice tem que primeiro fazer a operação que coresponde 
//	// a multiplicação de bytes que resulta em um novo indice, se ultiliza o operador ()
//	// para priorizar partes da operação aritimetica
//	// return (*(a+1)).peso
//	// tanto o . quanto o *, se comportam como operadores matemáticos
//	// quando fazemos *a.peso é semelhante a fazer b*a+1*c
//	// queremos b*(a+1)*c mas o resultado será diferente se escrito daquela forma
//	// e neste caso se pudesse colocar +1 seria no "b*a" a operação de ponteiro ja foi feita +1 seria invalido
//	// 
//	// no caso acima seria como, "primeiro acessamos o objeto peixe atraves do ponteiro, obtendo o proprio
//	// objeto peixe, e depois acessamos com . o membro do objeto  "
//	// 
//	// ou
//	//return a[0].peso; o [] esta desreferenciando o ponteiro e obtendo o objeto peixe daquela posição
//	// objeto peixe . = acesse o membro deste objeto
//	// a->peso= acesse o membro do objeto para o qual esse ponteiro aponta
//
//	// a->peso é (*a).peso de forma abreviada e a[1].peso é (*(a+1)).peso de forma abreviada também
//}