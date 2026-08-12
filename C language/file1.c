#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("test.txt","r");
    int ch;
    fscanf(fptr,"%c",&ch);
    printf("The word is = %c",ch);
    fscanf(fptr,"%c",&ch);
    printf("The word is = %c",ch);
    fscanf(fptr,"%c",&ch);
    printf("The word is = %c",ch);
    fscanf(fptr,"%c",&ch);
    printf("The word is = %c",ch);
    fscanf(fptr,"%c",&ch);
    printf("The word is = %c",ch);
    fscanf(fptr,"%c",&ch);
    printf("The word is = %c",ch);
    
    return 0;
}