#include<stdio.h>
#include<stdbool.h>
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n); //prime number
    bool flag = true;
    for(int i = 2 ; i<=n/2 ; i++){
        if(n%i==0){
        flag = false; //composite number 
        break;
        }
    }
    if(n==1){
    printf("niether prime or nor composite");
    }
    else if(flag==true){
    printf("Prime number");
    }
    else{
        printf("composite number");
    }
    return 0;
}