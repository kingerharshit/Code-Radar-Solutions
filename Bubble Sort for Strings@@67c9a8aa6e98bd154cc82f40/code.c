#include <stdio.h>
#include <string.h>

// Corrected function name (must match exactly)
void bubblesort(char arr[][100], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                char temp[100];
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

void printArray(char arr[][100], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    char arr[n][100];
    
    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }
    
    bubblesort(arr, n);  // Must match the defined name exactly
    printArray(arr, n);
    
    return 0;
}