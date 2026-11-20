#include<stdio.h>
int a = 7;
void change(){
    a = 5;
}
int main(){
    printf("%d ",a);
    change();
    printf("%d",a);
    return 0;
}