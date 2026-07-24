#include<stdio.h>
int main(){
    int marks;
    printf("Enter your marks : ");
    scanf("%d",&marks);
    if(marks<30){printf("Grade C");}
    else if(30<=marks&&marks<=70){printf("Grade B");}
    else if(70<=marks&&marks<=90){printf("Grade A");}
    else if(90<=marks&&marks<=100){printf("Grade A+");}
    return 0;
}