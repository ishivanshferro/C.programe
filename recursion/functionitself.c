#include<stdio.h>
void greet(int n){
    if(n==0) return;
    printf("%d\n",n);
    greet(n-1);
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    greet(n);
    return 0;
}