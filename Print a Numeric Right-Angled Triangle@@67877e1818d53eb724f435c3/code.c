#include <stdio.h>

int main() {
    int N;
    // Read the number of rows
    scanf("%d", &N);

    // Loop through each row
    for (int i = 1; i <= N; i++) {
        // Print numbers for the current row
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        // Move to the next line after printing numbers for the current row
        printf("\n");
    }

    return 0;
}