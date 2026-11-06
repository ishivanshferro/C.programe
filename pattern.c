#include<stdio.h>
int main(){
    int n;
    printf("Enter The Number : ");
    scanf("%d",&n);
    
    for(int i = 1; i<=n ; i++){
        int a = 1;
        for(int j = 4; j>=i; j--){
            printf("%d ",a);
            a = a + 2;
        }
        printf("\n");
    }
    return 0;
}