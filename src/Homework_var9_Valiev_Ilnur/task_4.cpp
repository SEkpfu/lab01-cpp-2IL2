/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <omp.h>
#include <math.h>
using namespace std;

int main()
{
    double z;
    double w;
    std::cout << "Введите значение переменной w: ";
    std::cin >> w;
    if(w <= 3)
    {
        z = abs(w*w - 1) / 2*w - 7;
    }
    if (3 < w < 4)
    {
        z = 1000;
    }
    if( w >= 4)
    {
        z = 1 + sqrt(w + 1/2*w);
        
    }
    std::cout << z;
    return 0;
    
}