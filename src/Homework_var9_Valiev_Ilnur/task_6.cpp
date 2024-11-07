/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <omp.h>
#include <math.h>
#include <valarray>
using namespace std;

int main()
{
    double s;
    double sum = 0;
    int currentSum = 0;
    std::cin >> s;
    for (int i = 1; i <= s; ++i) 
    {
        currentSum += i * i;
        sum += cos(currentSum);
    }

    std::cout << "The sum is: " << sum << std::endl;

    return 0;
}