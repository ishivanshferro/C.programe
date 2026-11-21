#include<stdio.h>
int ncr(int x){
    if(x<0){
        printf("error");
        return - 1; 
    }
    if(x==1) return 1;
    x = x * ncr(x-1);
    return x;
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int ans;
    ans = ncr(n);
    printf("%d",ans);
    return 0;
}