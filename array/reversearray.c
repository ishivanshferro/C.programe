#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int n;
    n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i<n ; i++){
        printf("%d\n ",arr[i]);
    }
    int i = 0;
    int j = n-1;
    while(i<j){
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
    i++;
    j--;
    }
     n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i<n ; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}