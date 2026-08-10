 #include<stdio.h>
void check(char str[],char ch);
 int main(){
char str[]="helloWorld";
char ch = 'w ';
check(str,ch);



    return 0;
 }
 void check(char str[],char ch){
    for(int i=0;str[i] !='\0';i++){
        if(str[i]==ch){
            printf("character is present");
            return;
        } 
    }printf("not present");
 }