/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main()
{
    int n;
    std::cout << "Enter the number of integers: ";
    std::cin >> n;
    
    
    int sum = 0;
    int product = 1;
    int count = 0;

    for (int i = 0; i < n; ++i) {
        int num;
    std::cout << "Enter an integer: ";
        std::cin >> num;
    
        if (num >= 10 && num <= 99 && num % 2 == 0) {
            sum += num;
        }
        
        if (num >= 10 && num <= 99) {
            product *= num;
        }
        
        if (num >= 20 && num <= 29) {
            count++;
        }
    }

    std::cout << "Сумма двузначных чисел : " << sum << std::endl;
    std::cout << "Произведение состоящее из двух чисел: " << product << std::endl;
    std::cout << "колличество цифр начинающихся на два " << count << std::endl;


    return 0;
}