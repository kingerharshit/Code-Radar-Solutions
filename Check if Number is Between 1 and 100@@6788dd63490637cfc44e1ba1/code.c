#include <stdio.h>

int main() {
    int number;

    // Reading the integer from input
    scanf("%d", &number);

    // Checking if the number is in the range 1 to 100
    if (number >= 1 && number <= 100) {
        printf("In Range\n");
    } else {
        printf("Out of Range\n");
    }

    return 0;
}