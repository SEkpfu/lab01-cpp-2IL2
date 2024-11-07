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
    double x;
    std::cout << "Введите значение переменной x: ";
    std::cin >> x;
    double result = pow(x, 16) - pow(x, 4) + pow(x, 2) - 2;
    std::cout << "Результат выражения x**16 - x**4 + x**2 - 2: " << result << std::endl;
    
    
    return 0;
}