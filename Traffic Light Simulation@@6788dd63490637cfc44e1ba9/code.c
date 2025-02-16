#include <stdio.h>

int main() {
    char signal;

    // Reading the traffic light signal from input
    scanf(" %c", &signal);

    // Determining the corresponding action
    switch (signal) {
        case 'R':
            printf("Stop\n");
            break;
        case 'G':
            printf("Go\n");
            break;
        case 'Y':
            printf("Slow Down\n");
            break;
        default:
            printf("Invalid input\n");
            break;
    }

    return 0;
}