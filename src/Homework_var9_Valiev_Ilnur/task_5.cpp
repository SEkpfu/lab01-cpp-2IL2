/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double x,y;
    cin >> x >> y;
//1
    if (x>0 && y>0) cout <<"no";
//2    
    if(x <= 0 && y >= 0 && x >= -10 && y <= 10 && y <= 10 + x) cout << "true";
    else cout << "no";
//3    
    if (x <= 0 && y <= 0 && x >= -10 && y >= -10 &&(x*x + y*y )<=100) cout << "true";
    else cout << "no";
//4    
    if(x >= 0 && y <= 0 && y >= -10 && y <= -5 && (x*x+y*y) <= 100 ) cout << "true";
    else cout << "no";
    return 0;
    
}