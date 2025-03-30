#include <stdio.h>

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        char current = 'A';
        for (int j = 1; j <= i; j++) {
            printf("%c ", current);
            current++;
        }
        printf("\n");
    }
    
    return 0;
}