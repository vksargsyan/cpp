#include <iostream>

/**
 * Factorial program
 * http://coliru.stacked-crooked.com/a/7a9b5d7d9f6ffe2a
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
	return 0;
}
