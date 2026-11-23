// 
#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i<n ; i++){
        if(i%2==0){
            arr[i] = arr[i]+arr[i];
        } 
        else{
            arr[i] = arr[i]+10;
        }
    }
    for(int i = 0 ; i<n ; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}