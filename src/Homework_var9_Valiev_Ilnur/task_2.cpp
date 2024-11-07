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
    double a, b, c;
    std::cout << "Введите три числа: ";
    std::cin >> a >> b >> c;
    double avg_arithmetic = (a + b + c) / 3;
    double avg_geometric = std::cbrt(a * b * c);

    (avg_arithmetic < 10) ? std::cout << "Среднее арифметическое: " << avg_arithmetic << ", среднее геометрическое: " << avg_geometric << std::endl
                      : std::cout << "Наименьшее из первого и третьего чисел: " << ((a < c) ? a : c) << std::endl;

    return 0;

}