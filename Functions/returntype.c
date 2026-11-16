#include<stdio.h>
int minn(int x, int y){
    if(x>y) return y;
    else return x;
}
int main(){
    int a;
    printf("Enter the number : ");
    scanf("%d",&a);
    int b;
    printf("Enter the number : ");
    scanf("%d",&b);
    int m = minn(a,b);
    printf("the number is minimum of them is %d",m);
    
return 0;
}