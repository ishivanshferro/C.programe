#include<stdio.h>
int minn(int x, int y){
    return x+y;
}
int main(){
    int a;
    printf("Enter the number : ");
    scanf("%d",&a);
    int b;
    printf("Enter the number : ");
    scanf("%d",&b);
    int m = minn(a,b);
    printf("the sum %d",m);
    
return 0;
}