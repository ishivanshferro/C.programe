#include<stdio.h>
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    int check;
    check = 1;  // prime number
    for(int i = 2; i<=n/2 ; i++){
    if(n%i==0){
       check = 0;
        break;
    }
}
    if(n==1){
        printf("niether prime or composite");
    }
    else if(check = 0){
        printf("composite number");
    }
    else{
        printf("prime number");
    }
    
    return 0;
}