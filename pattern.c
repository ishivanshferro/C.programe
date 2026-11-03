#include<stdio.h>
int main(){
    int y;
    printf("Enter The Number Of Columns luli : ");
    scanf("%d",&y);
    for(int i = 1;i<=5;i++){
        for(int j = 1; j<=y ;j++){
    printf("%c ",(char)64+j);
        }
        printf("\n");
    }
    return 0;
}