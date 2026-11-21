// #include<stdio.h>
// int ncr(int x){
//     if(x<0){
//         printf("error");
//         return - 1; 
//     }
//     if(x==1) return 1;
//     x = x * ncr(x-1);
//     return x;
// }
// int main(){
//     int n;
//     printf("Enter the number : ");
//     scanf("%d",&n);
//     int ans;
//     ans = ncr(n);
//     printf("%d",ans);
//     return 0;
// }
#include<stdio.h>
int raise(int x,int y){
    int c = 1;
    for(int i = 1;i<=y;i++){
        c = c * x;
    }
    return c;
}
int main(){
   int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int r;
    printf("Enter the number : ");
    scanf("%d",&r);
    int ans;
    ans = raise(n,r);
    printf("%d",ans);
    
    return 0;
}