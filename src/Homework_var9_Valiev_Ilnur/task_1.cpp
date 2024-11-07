/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <omp.h>

using namespace std;
int main()
{
    int x;
    int y;
    std::cin >> x;
    std::cin >> y;
    float c = x * x * 3.14;
    float v = y * y * 3.14;
    float g = c - v;
    std::cout<< c << endl;
    std::cout<< v << endl;
    std::cout<< g;
    

    return 0;
}