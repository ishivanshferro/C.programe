#include<stdio.h>
#include<stdbool.h>
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    bool flag = true;
    for(int i = 2; i<=n/2 ; i++){
    if(n%i==0){
       flag = false;
        break;
    }
}
    if(n==1){
        printf("niether prime or composite");
    }
    else if(flag == false){
        printf("composite number");
    }
    else{
        printf("prime number");
    }
    
    return 0;
}