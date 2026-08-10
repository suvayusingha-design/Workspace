#include<stdio.h>
#include<string.h>
 struct student{
    int roll;
    float cgpa;
    char name[100];
 };
 int main(){
    struct student s1;
    s1.roll =100;
    s1.cgpa=9.1;
    strcpy(s1.name,"Ritam");

    printf("student name=%s\n",s1.name);
    printf("roll number=%d\n",s1.roll);
    printf("cgpa=%f\n",s1.cgpa);

    struct student s2;
    s2.roll =99;
    s2.cgpa=9.0;
    strcpy(s2.name,"Suvayu");

    printf("student name=%s\n",s2.name);
    printf("roll number=%d\n",s2.roll);
    printf("cgpa=%f",s2.cgpa);
    return 0;
 }