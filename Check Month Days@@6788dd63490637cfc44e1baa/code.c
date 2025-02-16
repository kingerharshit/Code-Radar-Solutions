#include<stdio.h>
int main(){
    int month;
    scanf("%d",month);

    switch(month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        printf("31\n")
        break;
        case 4: // April
        case 6: // June
        case 9: // September
        case 11: // November
            printf("30\n");
            break;
        case 2:
        printf("28\n");
        break;

    }
}