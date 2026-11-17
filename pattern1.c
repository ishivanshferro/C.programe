#include<stdio.h>
int main(){
    int n;
    printf("Enter the Number : ");
    scanf("%d",&n);
    int nsp = n-1;
    int nst = 1;
    for(int i = 1; i<=n ; i++){
        for(int i = 1; i<=nsp ; i++){
            printf("  ");
        }
          for(int j = 1; j<=nst ; j++){
            printf("%d ",j);
        }
        nsp--;
        nst = nst +2;
        printf("\n");
    }
    return 0;
}