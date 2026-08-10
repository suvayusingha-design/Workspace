#include<stdio.h>
#include<string.h>
 struct student{
    int roll;
    float cgpa;
    char name[100];
 };
 int main(){
    struct student s1 ={100,9.1,"Suvayu"};
     
    printf("student name=%s\n",s1.name);
     
    struct student *ptr = &s1;
    printf("roll=%d\n",(*ptr).roll);
    return 0;
 }