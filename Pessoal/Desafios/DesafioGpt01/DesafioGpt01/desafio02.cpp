#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int num[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };


    int maior = num[0];
    int segundomaior=INT_MIN;
    int menor = num[0];
    int segundomenor=INT_MAX;
    
    int posimaior = 0;
    int posimaior2 = 0;
    int rep = 0;
    int posimenor = 0;
    int posimenor2 = 0;
    int contmaior = 0;
    int contmaior2 = 0;
    int contmenor = 0;
    int contmenor2 = 0;

    for (int i = 0; i < 10; i++)
    {
        int tempme = 0;
        int posi1 = 0;
        int tempma = 0;
        int posi2 = 0;
        

        if (maior < num[i])
        {
            segundomaior = maior;
            maior = num[i];
            posimaior2 = posimaior;
            posimaior = i;
        }
        else if (segundomaior < num[i]&&num[i]!=maior)
        {
            segundomaior = num[i];
            posimaior2 = i;
        }

       

        if (menor > num[i])
        {
            segundomenor = menor;
            menor = num[i];
            posimenor2 = posimenor;
            posimenor = i;
        }
        else if ((segundomenor > num[i] && num[i] != menor))
        {
            segundomenor = num[i];
            posimenor2 = i;
        }
        
    }

   

   



   
    for (int i = 0;i < 10;i++)
    {
        if (menor == num[i])
            contmenor++;



        if (segundomenor == num[i])
            contmenor2++;



        if (maior == num[i])
            contmaior++;



        if (segundomaior == num[i])
            contmaior2++;
    }

    cout << "primeiro maior" << endl;
    cout << "O maior número é: " << maior << "\nSua posição é: " << posimaior
        << "\nE se repete: " << contmaior << endl << endl;




    cout << "segundo maior" << endl;
    cout << "O segundo maior número é: " << segundomaior << "\nSua posição é: " << posimaior2
        << "\nE se repete: " << contmaior2 << endl << endl;






    cout << "primeiro menor" << endl;
    cout << "O menor número é: " << menor << "\nSua posição é: " << posimenor
        << "\nE se repete:  " << contmenor<<endl<<endl;






    cout << "segundo menor" << endl;
    cout << "O segundo menor número é: " << segundomenor << "\nSua posição é: " << posimenor2
        << "\nE se repete:  " << contmenor2 << endl << endl;

    

}