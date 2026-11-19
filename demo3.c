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
        for(int j = 1; j<=n-i ; j++){
            printf("  ");
        }
        for(int z = 0; z<=i; z++){
        int dabba;
        dabba = ans(i,z);
        printf("%d ",dabba);
        printf("  ");
        }
    printf("\n");
    
    }
    return 0;
}