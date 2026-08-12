#include<stdio.h>
int main(){
   FILE *fptr;
   fptr=fopen("test1hi.txt","w");

   char name[100];
   int marks;
   float cgpa;

   printf("Enter your name : ");
   scanf("%s",&name);
   printf("Enter your marks : ");
   scanf("%d",&marks);
   printf("Enter your cgpa : ");
   scanf("%f",&cgpa);

   fprintf(fptr,"%s\n",name);
   fprintf(fptr,"%d\n",marks);
   fprintf(fptr,"%f\n",cgpa);

   fclose(fptr);

   return 0;
}