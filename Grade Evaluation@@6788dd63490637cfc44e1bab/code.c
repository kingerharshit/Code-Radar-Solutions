#include <stdio.h>

int main() {
    char grade;

    // Reading the grade character from input
    scanf(" %c", &grade);

    // Determining the grade description
    switch (grade) {
        case 'A':
            printf("Excellent\n");
            break;
        case 'B':
            printf("Good\n");
            break;
        case 'C':
            printf("Average\n");
            break;
        case 'D':
            printf("Below Average\n");
            break;
        case 'F':
            printf("Fail\n");
            break;
        default:
            printf("Invalid grade\n");
            break;
    }

    return 0;
}