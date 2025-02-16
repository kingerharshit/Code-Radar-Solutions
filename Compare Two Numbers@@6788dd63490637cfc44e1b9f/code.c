#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %D",&a,&b);

    if(a==b){
        printf("Equal");
    }
    else if(a>b){
        printf("First");
    }
    else{
        printf("Second");
    }
}