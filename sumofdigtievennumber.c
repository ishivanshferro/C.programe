#include<stdio.h>
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    int sum = 0;
    while(n>0){
    int rem = n%10;
    n = n/10;
    if(rem%2==0){
        sum = sum + rem;
    }
    }
    printf("the sum of even number %d",sum);
    return 0;
}