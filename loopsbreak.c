#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int lf;
    for(int i = n-1 ; i>=1 ; i--){
        if(n%i==0){
            lf = i;
            break;
        }
    }
    printf("%d",lf);
    return 0;
}