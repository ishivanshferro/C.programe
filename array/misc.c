#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n;
    n = sizeof(arr)/sizeof(arr[0]);
    int sumofevenindexing = 0;
    int sumofoddindexing = 0;

    for(int i = 0; i<n ; i++){
         if(i%2==0){
        sumofevenindexing = sumofevenindexing + arr[i];
    }
    else if(i%2!=0){
     sumofoddindexing = sumofoddindexing + arr[i]; 
    }
    }
   printf("%d\n",sumofevenindexing);
   printf("%d",sumofoddindexing);
    return 0;
}