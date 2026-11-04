#include<stdio.h>
int main(){
    int n;
    n = 3;
    for(char i = 'A';i<'A'+n ;i++){
        for(char j = 'A'; j<'A'+n ;j++){
    printf("%c ",i);
        }
        printf("\n");
    }
    return 0;
}