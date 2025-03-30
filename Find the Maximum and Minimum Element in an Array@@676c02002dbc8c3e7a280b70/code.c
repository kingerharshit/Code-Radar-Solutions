#include<stdio.h>
void MaxMin(int arr[],int n,int *max, int *min){
    *max=arr[0];
    *min=arr[0];
    for (int i=1;i<n;i++){
        if(arr[i]>*max){
            *max=arr[i];
        }
        if(arr[i]<*min){
            *min=arr[i];
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max,min;
    MaxMin(arr,n,&max,&min);
    printf("%d %d",min,max);
    return 0;
 
}