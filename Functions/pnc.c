#include<stdio.h>
#include<math.h>
int fact(int z){
    int f = 1;
    for(int i = 1 ; i<=z ; i++){
    f = f * i;
    }
    return f;
}
int ncr(int r,int s){
    return fact(r)/fact(r-s);
}
    int main(){
        int r;
        printf("Enter the number : ");
        scanf("%d",&r);
        int s;
        printf("Enter the number : ");
        scanf("%d",&s);
        int answer;
        answer = ncr(r,s);
        printf("%d",answer); 
    return 0;
}
