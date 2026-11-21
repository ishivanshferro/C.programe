#include<stdio.H>
int main(){
    printf("\n");
    int x = 9;
    int* z = &x;
    printf("%d\n",x);
    *z = 7;
    printf("%d",x);
}