#include<stdio.h>
int main(){
    int arr[3][3] = {{1,2,3}, {4,5,6,},{7,8,9,}};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i<n ; i++ ){
        for(int j = 0 ; j < n ; j++){
          printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}