 #include <stdio.h>
 int calculatePercentage(int a,int b, int c);
 int main(){
    int a=89;
    int b=90;
    int c=89;
printf("percentage is : %d",  calculatePercentage( a, b,  c));


    return 0;
 }
 int calculatePercentage(int a,int b, int c){
    return ((a+b+c)/3)*100;
 }