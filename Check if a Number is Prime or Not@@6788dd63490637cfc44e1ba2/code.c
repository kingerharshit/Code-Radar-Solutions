#include <stdio.h>

int main() {
    int num, i, flag = 0;
    
    // Input the number
    scanf("%d", &num);
    
    // Check if the number is prime
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            flag = 1;
            break;
        }
    }
    
    // Output the result
    if (num <= 1) {
        printf("Not Prime");
    } else if (flag == 0) {
        printf("Prime");
    } else {
        printf("Not Prime");
    }
    
    return 0;
}