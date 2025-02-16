#include <stdio.h>

int main() {
    int num1, num2;

    // Reading two integers from input
    scanf("%d %d", &num1, &num2);

    // Checking if the first number is the square of the second number
    if (num1 == num2 * num2) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}