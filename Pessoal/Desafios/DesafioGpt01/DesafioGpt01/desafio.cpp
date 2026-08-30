//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int num[10] = { 7,2,9,4,9,1,3,9,5,1 };
//
//
//    int maior = 0;
//    int menor = 0;
//    int posimaior=0;
//    int rep = 0;
//    int posimenor = 0;
//    int contmaior = 0;
//    int contmenor = 0;
//
//    for (int i = 0; i < 10;i++)// Ele tava <9 mds kkkkkkkkkkkkkkkk
//    {
//        for (int j = 0;j < 10;j++)
//        {
//            if ((num[i] > num[j] && num[i] > maior) )
//            {
//                maior = num[i];
//                posimaior = i;
//                
//               
//
//
//            }
//        }
//
//
//
//    }
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
//    for (int i = 0; i < 10;i++)// Ele tava <9 mds kkkkkkkkkkkkkkkk
//    {
//        for (int j = 0;j < 10;j++)
//        {
//            if ((num[i] < num[j] && num[i] < menor)||menor==0)
//            {
//                menor = num[i];
//                posimenor = i;
//
//
//
//
//            }
//        }
//
//
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