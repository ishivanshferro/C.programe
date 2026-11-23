#include<stdio.h>
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,1};
    int product = 1;
    for(int i = 0; i<=10-1 ;i++){
    product = product * arr[i];
    }
    printf("%d",product);
    return 0;
}