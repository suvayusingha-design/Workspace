 #include<stdio.h>
 struct address{
   int number;
   char name[100];

 };
void printAdd(struct address add);
 int main(){

struct address add[2];
printf("Enter address :");
scanf("%d",&add[0].number);
scanf("%s",&add[0].name);
printf("Enter address :");
scanf("%d",&add[1].number);
scanf("%s",&add[1].name);
printAddress(add[0]);
printAddress(add[1]);
   return 0;
 }
 void printAddress(struct address add){
   printf("address is: %d,%s\n",add.number,add.name);
 }