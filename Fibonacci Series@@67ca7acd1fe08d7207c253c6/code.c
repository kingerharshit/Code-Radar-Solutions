#include <stdio.h>

// Function to generate and print Fibonacci series up to N terms
void fibonacciseries(int n) {
    if (n >= 1) {
        printf("0");
    }
    if (n >= 2) {
        printf(" 1");
    }
    
    int a = 0, b = 1, c;
    for (int i = 3; i <= n; i++) {
        c = a + b;
        printf(" %d", c);
        a = b;
        b = c;
    }
}

fibonacciseries