#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    for(int i = 1; i <= N; i++) {
        printf("%d%c", i, (i < N) ? ' ' : '\n');
    }
    
    return 0;
}