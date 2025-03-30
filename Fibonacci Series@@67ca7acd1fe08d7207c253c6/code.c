#include <stdio.h>

void fibonacciseries() {
    if (int n <= 0) {
        printf("Invalid input\n");
        return;
    }

    int a = 0, b = 1, c;
    if (int n >= 1) {
        printf("0");
    }
    if (int n >= 2) {
        printf(" 1");
    }
    for (int i = 3; i <= n; i++) {
        c = a + b;
        printf(" %d", c);
        a = b;
        b = c;
    }
    printf("\n");
}

