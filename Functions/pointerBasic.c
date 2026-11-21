#include<stdio.H>
int main(){
    printf("\n");
    int x = 9;
    int* z1 = &x;
    int y = 9;
    int* z2 = &y;
    printf("%p\n%p\n",z1,z2);
    return 0;
}