#include<stdio.h>
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    int pr = 1;
    for(int i = 1; i<=n; i++){
    pr = pr * i ;
    }
    printf("factorial %d", pr);
    return 0;
}