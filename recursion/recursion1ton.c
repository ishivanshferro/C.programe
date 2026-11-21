#include<stdio.h>
void greet(int n,int x){
    if(n>x) return;
    printf("%d\n",n);
    greet(n+1,x);
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    greet(1,n);
    return 0;
}