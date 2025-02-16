#include <stdio.h>

int main() {
    int age, citizen;

    // Reading age and citizenship status from input
    scanf("%d %d", &age, &citizen);

    // Checking eligibility
    if (age >= 18 && citizen == 1) {
        printf("Eligible\n");
    } else {
        printf("Not Eligible\n");
    }

    return 0;
}