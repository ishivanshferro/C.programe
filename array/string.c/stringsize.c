#include<stdio.h>
int main(){
    char str[] = "Physics Wallah";
    str[0] = 'M';
    str[1] = 97;
    char x;
    x = 65;
    printf("%c\n",str[1]);
    printf("%d\n",str[1]);
    printf("%c",x);
    return 0;
}