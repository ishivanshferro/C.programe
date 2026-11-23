// 
#include<stdio.h>
int main(){
    int x;
    printf("enter ");
    scanf("%d",&x);
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    for(int i = 0 ; i<n ; i++){
     if(arr[i]>x){
        sum = sum + arr[i];
     }
    }
    printf("%d",sum);
    // for(int i = 0 ; i<n ; i++){
    //     printf("%d ",arr[i]);
    // }
    return 0;
}