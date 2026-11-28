#include<stdio.h>
#include<string.h>
int main(){
    struct person{
        int age;
        float salary;
        char name[20];
    };
    struct person firstperson;
    firstperson.age = 40;
    firstperson.salary = 4040400404.3;
    strcpy(firstperson.name,"Raghav");
     struct person secondperson;
    secondperson.age = 41;
    secondperson.salary = 4040400404.3;
    strcpy(secondperson.name,"Maghav");
    printf("%s\n%d",firstperson.name,secondperson.age);
    return 0;
}