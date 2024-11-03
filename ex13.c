#include <stdio.h>

long long factorial_recursive(int n) {
    
    if (n == 0 || n == 1) {
        return 1;
    }
    
    return n * factorial_recursive(n - 1);
}

int main() {
    int number;
    printf("Enter a number (less than 50): ");
    scanf("%d", &number);

    if (number < 50 && number >= 0) {
        long long result = factorial_recursive(number);
        printf("Factorial of  = %lld\n", result);
    } else {
        printf("Please enter a number less than 50.\n");
    }

    return 0;
}
