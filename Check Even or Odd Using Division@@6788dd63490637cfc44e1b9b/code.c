#include <stdio.h>

int main() {
    int num;
    
    
    scanf("%d ", &num);
    
    // Check if num is a multiple of divisor
    if (num != 0 && num % 2 == 0) {
        printf("Even");
    } else {
        printf("Odd");
    }
    
    return 0;
}