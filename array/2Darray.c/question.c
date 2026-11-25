#include<stdio.h>
int main(){
    int arr[3][3] = {{5,8,2},{7,1,9},{4,6,3}};
        int product = 1;
        for(int i = 0  ; i<3 ; i++){
            for(int j = 0; j<3 ; j++){
            product = product * arr[i][j];
            }
        }
    printf("The sum is :  %d",product);
    return 0;
}