#include<stdio.h>
#include<stdbool.h>
int main(){
    int x;
    printf("enter the number you want look : ");
    scanf("%d",&x);
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n;
    n = sizeof(arr)/sizeof(arr[0]);
    bool  flag = false;
    for(int i  = 0; i<n ; i++){
    if(arr[i]==x){
        flag = true;
        break;
    }
    }
    if(flag==true){
        printf("exist");
    }
    if(flag==false){
        printf("no exist");
    }
    return 0;
}