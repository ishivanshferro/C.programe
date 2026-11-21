#include<stdio.h>
void sum(int x,int sumnum){
    if(x==0){
        printf("%d",sumnum);
        return;
    }
    sum(x-1,sumnum+x);

}
int main(){
    int n;
    printf("Enter The Number : ");
    scanf("%d",&n);
    sum(n,0);
    return 0;
}