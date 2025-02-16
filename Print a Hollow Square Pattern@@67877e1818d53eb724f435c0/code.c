#include <stdio.h>

int main() {
    int N;
    // Read the side length of the square
    scanf("%d", &N);

    // Loop through each row
    for (int i = 1; i <= N; i++) {
        // Loop through each column
        for (int j = 1; j <= N; j++) {
            // Print stars for the first and last row, or for the first and last column
            if (i == 1 || i == N || j == 1 || j == N) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        // Move to the next line after printing stars for the current row
        printf("\n");
    }

    return 0;
}