#include<stdio.H>
int main(){
int x = 25;
int *p = &x;

printf("%p\n", p);
printf("%p\n", &x);
}