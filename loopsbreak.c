#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int hf;
    for(int i = n-1 ; i>=1 ; i--){
        if(n%i==0){
            hf = i;
            break;
        }
    }
    printf("%d",hf);
    return 0;
}