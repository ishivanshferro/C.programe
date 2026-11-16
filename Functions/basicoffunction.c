#include<stdio.h>
void oddevenfunction(int x){
    if(x%2==0){
    printf("The number is even");
    }
    else{
    printf("The number is odd");
    }
}
int main(){
    int a;
    printf("Enter the number : ");
    scanf("%d",&a);
    oddevenfunction(a);
    return 0;
}