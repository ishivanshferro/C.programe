#include<stdio.h>
#include<stdbool.h>
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    int i = 2;
    bool flag = true;
    while(i<=n/2){
        if(n%i==0){
            flag = false;
        }
    i++;
    }
    if(n==1){
        printf("niether prime or composite");
    }
    else if(flag == false){
        printf("composite number");
    }
    else{
        printf("prime number");
    }
    return 0;
}