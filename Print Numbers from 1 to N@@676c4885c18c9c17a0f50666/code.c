#include <stdio.h>

int main() {
    int N;
    // Read input
    if(scanf("%d", &N) != 1 || N < 1) {
        // Handle invalid input (non-integer or N < 1)
        return 1;
    }
    
    // Print numbers with proper spacing
    printf("1");  // First number without space
    for(int i = 2; i <= N; i++) {
        printf(" %d", i);  // Subsequent numbers with leading space
    }
    
    return 0;
}