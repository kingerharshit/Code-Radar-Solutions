#include <stdio.h>

int main() {
    int a, b, c;
    
    // Input the sides of the triangle
    scanf("%d %d %d", &a, &b, &c);
    
    // Check if the sides form a valid triangle
    if (a + b > c && a + c > b && b + c > a) {
        // Check the type of triangle
        if (a == b && b == c) {
            printf("Equilateral");
        } else if (a == b || a == c || b == c) {
            printf("Isosceles");
        } else {
            printf("Scalene");
        }
    } else {
        printf("Invalid Triangle");
    }
    
    return 0;
}