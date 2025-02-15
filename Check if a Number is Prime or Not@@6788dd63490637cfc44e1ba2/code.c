#include <stdio.h>
#include <math.h>

int main() {
    int num, i, isPrime = 1;
    
    // Input the number
    scanf("%d", &num);
    
    // Check if the number is greater than 1
    if (num <= 1) {
        isPrime = 0;
    } else {
        // Check divisibility from 2 to sqrt(num)
        for (i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    
    // Output the result
    if (isPrime) {
        printf("Prime");
    } else {
        printf("Not Prime");
    }
    
    return 0;
}