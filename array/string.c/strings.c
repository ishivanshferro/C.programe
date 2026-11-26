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
    char arr[] = "PhysicsWallah";
    int n;
    n = sizeof(arr)/sizeof(arr[0]);
        printf("%s",arr);
    printf("\n%d",n);
    return 0;
}