#include<stdio.h>
void calculatePrice(float value);
int main(){
float value=100.0;
calculatePrice( value);
printf("Value is %f\n", value);

  return 0;
}
void calculatePrice(float value){
  value = value + (value*0.18);
printf("The price is:%f\n", value);
}