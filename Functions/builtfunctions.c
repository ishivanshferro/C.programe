#include<stdio.h>
#include<math.h>
int main(){
    // int a;
    // printf("Enter the number : ");
    // scanf("%d",&a);
    // float roots;
    // roots = cbrt(a);
    // printf("%f",roots);
    int a;
    printf("Enter the number : ");
    scanf("%d",&a);
    int b;
    printf("Enter the number : ");
    scanf("%d",&b);
    int power;
    power = pow(a,b);
    printf("%d",power);
    return 0;
}