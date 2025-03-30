#include <stdio.h>

int main() {
    int N;
    // Read input
    scanf("%d", &N);
    
    // Print numbers from 1 to N using a loop
    for(int i = 1; i <= N; i++) {
        printf("%d", i);
        // Don't print space after the last number
        if(i != N) {
            printf(" ");
        }
    }
    
    return 0;
}