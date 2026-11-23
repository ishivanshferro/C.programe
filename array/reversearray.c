#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int n;
    n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i<n ; i++){
        printf("%d\n ",arr[i]);
    }
    int brr[n];
     for(int i = 0 ; i<n ; i++){
        brr[i] = arr[n-1-i];
        printf("%d ",brr[i]);
    }

    return 0;
}