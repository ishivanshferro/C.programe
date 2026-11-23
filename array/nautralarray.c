#include<stdio.h>
int main(){
    int x;
    printf("enter the number : ");
    scanf("%d",&x);
    int arr[x];
    for(int i = 1 ; i<=x; i++){
        arr[i-1] = i*i;
    } 
    for(int i = 0 ; i<x; i++){
        printf("%d ",arr[i]);
    } 
    return 0;
}