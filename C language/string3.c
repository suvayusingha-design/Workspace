 #include<stdio.h>
 int main(){
    char str[100];
    int i=0;
    printf("Enter a string:");
while(i<99){
    scanf("%c",&str[i]);
    if(str[i] == '\n'){
        break;
    }
    i++;
}
str[i]= '\0';
printf("%s\n",str);
return 0;
 }