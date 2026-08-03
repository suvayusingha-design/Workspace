 #include<stdio.h>
 int main(){
    char str1[100]="Hello ";
    char str2[]="World";
    strcat(str1,str2);
    puts(str1);
    return 0;
 }