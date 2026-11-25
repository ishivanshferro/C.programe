#include<stdio.h>
int main(){
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i<5 ; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int i = 0;
    int j = n-1-i;
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
     for(int i = 0; i<5 ; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}