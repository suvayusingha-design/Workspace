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
    printf("roll number=%d\n",s1.roll);
    printf("cgpa=%f\n",s1.cgpa);

    
    return 0;
 }