#include <stdio.h>
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

void displayFibonacci(int n) {
    
    for (int i = 0; i <= n; i++) {
        printf("%d ", fibonacci(i)); 
    }
    printf("\n");
}

int main() {
    int n;

    
    printf("Enter a number = ");
    scanf("%d", &n);


    if (n < 0) {
        printf("Please enter a positive number \n");
        return 1;
    }


    int nthFibonacci = fibonacci(n);
    printf("%d. Fibonacci number: %d\n", n, nthFibonacci);

   
    displayFibonacci(n);

    return 0;
}

