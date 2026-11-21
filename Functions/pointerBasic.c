#include<stdio.H>
int main(){
    printf("\n");
    int x = 9;
    int* z = &x;
    printf("%d\n",x);
     printf("%p\n",&x);
    printf("%p\n",z);
     printf("%p\n",&z);
    printf("%d\n",*z);
}