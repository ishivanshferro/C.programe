#include<stdio.h>
int main(){
    int x;
    printf("enter the number : ");
    scanf("%d",&x);
    int arr[x];
    for(int i = 0 ; i<x; i++){
        scanf("%d",&arr[i]);
    } 
    for(int i = 0 ; i<x; i++){
        printf("%d",arr[i]*arr[i]);
    } 
    return 0;
}