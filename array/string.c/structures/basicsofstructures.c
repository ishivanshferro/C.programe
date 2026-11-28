#include<stdio.h>
int main(){
    int x;
    x  = 5;
    struct student{
        int rollno;
        float percentage;
        char grade;
    };
    struct student shivansh;
    shivansh.grade = 'A';
    shivansh.percentage = 90.67;
    shivansh.rollno = 81;
    printf("%c\n%f\n%d\n\n",shivansh.grade,shivansh.percentage,shivansh.rollno);
    shivansh.grade = 'A';
    shivansh.percentage = 90.17;
    shivansh.rollno = 93;
     printf("%c\n%f\n%d",shivansh.grade,shivansh.percentage,shivansh.rollno);
    return 0;
}