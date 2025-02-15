#include <stdio.h>

int main() {
    int a, b;
    
    // Input the number and the divisor
    scanf("%d %d", &a, &b);
    
    // Check if num is a multiple of divisor
    if (b != 0 && a % b == 0) {
        printf("Yes");
    } else {
        printf("No");
    }
    
    return 0;
}