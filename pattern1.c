#include<stdio.h>
int main(){

    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
     int z;
    printf("Enter the number : ");
    scanf("%d",&z);
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=z; j++){
            if(i+j<5){
                printf("  ");
            }
            else{
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}