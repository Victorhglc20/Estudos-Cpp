//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int num[10] = { 7 ,2 ,9 ,4 ,9 ,1 ,3 ,9 ,5 ,1 };
//
//
//    int maior = num[0];
//    int menor = num[0];
//    int posimaior = 0;
//    int rep = 0;
//    int posimenor = 0;
//    int contmaior = 0;
//    int contmenor = 0;
//
//    for (int i = 0; i < 10; i++)
//    {
//        
//        if (maior < num[i])
//        {
//            maior = num[i];
//            posimaior = i;
//        }
//        else if (i == 9 && num[i] > maior)
//            maior = num[i];
//   
//    }
//
//    for (int i = 0;i < 10;i++)
//    {
//        if (maior == num[i])
//            contmaior++;
//    }
//
//    cout << "O maior número é: " << maior << "\nSua posição é: " << posimaior
//        << "\nE se repete: " << contmaior << endl;
//
//
//
//    for (int i = 0; i < 10; i++)
//    {
//
//        if (menor > num[i])
//        {
//            menor = num[i];
//            posimenor = i;
//        }
//        else if (i==9&&num[i] < menor)
//            menor = num[i ];
//
//    }
//    for (int i = 0;i < 10;i++)
//    {
//        if (menor == num[i])
//            contmenor++;
//    }
//    cout << "O menor número é: " << menor << "\nSua posição é: " << posimenor
//        << "\nE se repete:  " << contmenor;
//
//    /*ACABOUUUU É TETRAAAA!!*/
//
//}