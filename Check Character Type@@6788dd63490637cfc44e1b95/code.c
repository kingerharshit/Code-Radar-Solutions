#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);

    if(tolower(ch)=='a' || tolower(ch)=='e' || tolower(ch)=='i' || tolower(ch)=='o' || tolower(ch)=='u'){
        printf("Vowel");
    }
    else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
        printf("Consonent");
    }
    else if((ch>='0' && ch<='9')){
        printf("Digit");
    }
    else(
        printf("Special Character");
    )
    }
