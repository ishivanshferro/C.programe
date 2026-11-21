#include<stdio.h>
void swap(int* a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp; 
}
int main(){
    int x;
    printf("Enter the Number : ");
    scanf("%d",&x);
    int y;
    printf("Enter the number : ");
    scanf("%d",&y);
    printf("%d %d\n",x,y);
    // int temp = x;
    // x = y;
    // y = temp;
    // printf("%d %d\n",x,y);
    swap(&x,&y);
    printf("%d %d\n",x,y);

}