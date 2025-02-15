#include <stdio.h>
#include <ctype.h> // For tolower function

int main() {
    char ch;
    scanf("%c", &ch);
    
    if (tolower(ch) == 'a' || tolower(ch) == 'e' || tolower(ch) == 'i' || tolower(ch) == 'o' || tolower(ch) == 'u') {
        printf("Vowel");
    } else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("Consonant");
    } else if (ch >= '0' && ch <= '9') {
        printf("Digit");
    } else {
        printf("Special Character");
    }
    
    return 0;
}
