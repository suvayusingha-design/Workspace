 #include <stdio.h>
 int main(){
  int number;
  printf("Enter a number:");
  scanf("%d",&number);
  if(number >= 0){printf("Positive\n");
    if(number%2==0){printf("even\n");
  } 
  else{printf("odd\n");}} else {
     printf("negative");}
  return 0;
 }