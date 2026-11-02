#include<stdio.h>
int main(){
    int n;
    printf("Enter The Number Of Row : ");
    scanf("%d",&n);
    int y;
    printf("Enter The Number Of Column : ");
    scanf("%d",&y);
    for(int i = 1;i<=n;i++){
        for(int j = 1; j<=y ;j++){
    printf("%c ",(char)64+j);
        }
        printf("\n");
    }
    return 0;
}