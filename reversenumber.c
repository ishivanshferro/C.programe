#include<stdio.h>
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    int r = 0;
    while(n>0){
    int rem = n%10;
    n = n/10;
    r = r*10;
    r = r + rem;
    }
    printf("the rev of  number %d", r);
    return 0;
}