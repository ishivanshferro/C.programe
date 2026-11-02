#include<stdio.h>
int main(){
    int n;
    printf("Enter The Number Of Row : ");
    scanf("%d",&n);
    int y;
    printf("Enter The Number Of Column : ");
    scanf("%d",&y);
    for(int i = 1;i<=n;i++){
        for(int i = 1;i<=y;i++){
    printf("*");
        }
        printf("\n");
    }
    return 0;
}