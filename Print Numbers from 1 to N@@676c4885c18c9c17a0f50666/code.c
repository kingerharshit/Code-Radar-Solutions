#include <stdio.h>

int main() {
    int N, i;
    scanf("%d", &N);
    
    if (N >= 1) {
        printf("1");
        for (i = 2; i <= N; i++) {
            printf(" %d", i);
        }
    } else if (N <= -1) {
        printf("-1");
        for (i = -2; i >= N; i--) {
            printf(" %d", i);
        }
    } else { // N == 0
        printf("0