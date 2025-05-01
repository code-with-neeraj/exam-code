#include <stdio.h>

unsigned long long factorial(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    printf("Enter a number: ");
    if (scanf("%d", &num) != 1) {
        printf("Please enter a valid integer.\n");
        return 1;
    }
    
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else if (num > 20) {
        printf("Input too large; result may overflow.\n");
    } else {
        unsigned long long result = factorial(num);
        printf("The factorial of %d is %llu\n", num, result);
    }
    
    return 0;
}