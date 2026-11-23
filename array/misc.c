#include<stdio.h>
#include<stdbool.h>
#include<limits.h>
int main(){
    int arr[] = {1,2,3,4,9,9,7,8,9,118,1000};
    int maximum = INT_MIN;
    int n;
    n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i<n; i++){
        if(maximum < arr[i]){
            maximum = arr[i];
        }
    }
    int smax = INT_MIN;
    for(int i = 0 ; i<n; i++){
        if(smax <  arr[i] && arr[i] < maximum){
            smax = arr[i];
        }
    }
    printf("%d",smax);
    return 0;
}