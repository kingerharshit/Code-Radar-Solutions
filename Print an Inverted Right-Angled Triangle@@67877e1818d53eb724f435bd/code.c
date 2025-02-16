#include <stdio.h>

int main() {
    int N;
    // Read the number of rows
    scanf("%d", &N);

    // Loop through each row
    for (int i = N; i >= 1; i--) {
        // Print stars for the current row
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        // Move to the next line after printing stars for the current row
        printf("\n");
    }

    return 0;
}