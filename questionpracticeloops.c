#include<stdio.h>
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    while(n>0){
        int ls = n%10;
        n = n/10;
        printf("%d",ls);
    }
    return 0;
}