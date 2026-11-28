#include<stdio.h>
#include<string.h>
int main(){
    struct book{
        int pages;
        float price;
        char name[20];
    };
    struct book b1;
    b1.price = 4949.92;
    b1.pages = 3839;
    strcpy(b1.name,"top notch");
    printf("%s",b1.name);
    return 0;
}