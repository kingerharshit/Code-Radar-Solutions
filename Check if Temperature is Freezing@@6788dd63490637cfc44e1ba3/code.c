#include <stdio.h>

int main() {
    int temperature;

    // Reading the temperature from input
    scanf("%d", &temperature);

    // Checking if the temperature is freezing or above freezing
    if (temperature <= 0) {
        printf("Freezing\n");
    } else {
        printf("Above Freezing\n");
    }

    return 0;
}