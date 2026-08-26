
#define _use_math_defines
#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <ctime>
#include <cmath>
#include <math.h>
#include<stdlib.h>
#include <iomanip>// necessario para usar --> setprecision(3)
using namespace std;

   int main()
    {
       int ano = 0;
        int p0 = 1500;
        double percent = 5;
        int aug = 100;
        int p = 5000;
            

        int resul = p0;
        while (resul < p)
        {
            resul += resul * (percent / 100);
            resul += aug;
            ano++;
        }
        cout << ano;
    }
