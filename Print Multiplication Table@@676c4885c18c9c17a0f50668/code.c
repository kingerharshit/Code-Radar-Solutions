#include <stdio.h>

int main() {
    int N;
    
    // Read input
    scanf("%d", &N);
    
    // Print multiplication table using a loop
    for(int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", N, i, N * i);
    }
    
    return 0;
}