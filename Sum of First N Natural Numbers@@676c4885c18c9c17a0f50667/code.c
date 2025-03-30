#include <stdio.h>

int main() {
    int N, sum = 0;
    
    // Read input
    scanf("%d", &N);
    
    // Calculate sum using a loop
    for(int i = 1; i <= N; i++) {
        sum += i;
    }
    
    // Output the result
    printf("%d", sum);
    
    return 0;
}