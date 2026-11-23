#include<stdio.h>
int main(){
    int arr[] = {1,23,4,5,6,7,7,8,9,100,};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maximum = arr[0];
    for(int i = 1;i<n;i++){
        if(maximum<arr[i]){
            maximum = arr[i];
        }
    }
    printf("%d",maximum);
    return 0;
}