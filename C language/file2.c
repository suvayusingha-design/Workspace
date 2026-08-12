#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("test.txt","w");
     fprintf(fptr,"%c","H");
    fprintf(fptr,"%c","i");

    return 0;
}