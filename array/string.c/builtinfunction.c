#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "shivanshmishra";
    char ptr[15];
    strcpy(ptr,str);
    printf("%s",ptr);
    return 0;
}