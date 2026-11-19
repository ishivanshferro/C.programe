#include<stdio.h>
int factorial(int z){
    int f = 1;
    for(int i = 1; i<=z ; i++){
    f = f * i;
    }
    return f;
}
    int ans(int x, int y){
        return factorial(x)/(factorial(y) * factorial(x-y));
    }
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i = 0; i<=n ; i++){
        for(int j = 0; j<=i ; j++){
        int dabba;
        dabba = ans(i,j);
        printf("%d ",dabba);
        }
    printf("\n");
    
    }
    return 0;
}