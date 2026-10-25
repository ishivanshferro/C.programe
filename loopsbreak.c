#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int hf;
    for(int i = 1 ; i<n ; i++){
        if(n%i==0){
            hf = i;
        }
    }
    printf("%d",hf);
    return 0;
}