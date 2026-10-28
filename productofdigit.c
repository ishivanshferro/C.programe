#include<stdio.h>
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    int product = 1;
    while(n>0){
    int rem = n%10;
    n = n/10;
     product = product * rem;
    }
    printf("the product of  number %d", product);
    return 0;
}