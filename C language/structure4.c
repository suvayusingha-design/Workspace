#include<stdio.h>
#include<string.h>
 struct student{
    int roll;
    float cgpa;
    char name[100];
 };
 void printInfo(struct student s1);
 int main(){
    struct student s1 ={100,9.1,"Suvayu"};
      printInfo( s1);
    
    return 0;
 }
 void printInfo(struct student s1){
printf("student name=%s\n",s1.name);
      
     printf("roll number:%d", s1.roll);
 }