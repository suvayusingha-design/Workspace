#include<stdio.h>
#include<string.h>
 typedef struct student{
    int roll;
    float cgpa;
    char name[100];
 }stu;
  int main(){
stu s1;
s1.roll=100;
s1.cgpa=9.1;
strcpy(s1.name,"Suvayu");
printf("student name:%s\n",&s1.name);
printf("roll:%d",s1.roll);
 return 0;
  }
    
   
 
  