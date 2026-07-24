 #include <stdio.h>
 int main(){
  int number;
  printf("Enter a number:");
  scanf("%d",&number);
  if(number >= 0){printf("Positive");
    if(number%2==0){printf("even");
  } 
  else{printf("odd");}} else {
     printf("negative");}
  return 0;
 }