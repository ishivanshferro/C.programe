// #include<stdio.h>
// int main(){
//     char arr[] = {'S','h','i','v','a','n','s','h'};
//     int n;
//     n = sizeof(arr)/sizeof(arr[0]);
//     for(int i = 0; i<n ; i++){
//         printf("%c",arr[i]);
//     }
//     return 0;
// }
#include<stdio.h>
int main(){
    char arr[] = "Shivansh ";
    int n;
    n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<n ; i++){
        printf("%c",arr[i]);
    }
    printf("\n%d",n);
    return 0;
}