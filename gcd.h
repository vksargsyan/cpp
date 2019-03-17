#include <iostream>

/**
 * GCD program
 * http://coliru.stacked-crooked.com/a/
 */
 
int gcd(int num1, int num2) {
	if (num1 == 0)
		return num2;
	
	return gcd(num2 % num1, num1);
}

int main()
{
    int d = gcd(256, 12);
    
    std::cout << d << std::endl;
	return 0;
}