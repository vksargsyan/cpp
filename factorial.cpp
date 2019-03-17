#include <iostream>

/**
 * Factorial program
 */
 
int factorial(int num) {
    if (num > 1)
        return num * factorial(num - 1);
    
    return 1;
}

int main()
{
    int f = factorial(0);
    
    std::cout << f << std::endl;
}
