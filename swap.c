#include<stdio.h>
int main(){
    int x;
    printf("Enter the Number : ");
    scanf("%d",&x);
    int y;
    printf("Enter the Number : ");
    scanf("%d",&y);
    printf("%d %d\n",x,y);
    int temp = x;
    x = y;
    y = temp;
     printf("%d %d",x,y);
    return 0;
}