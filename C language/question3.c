#include<stdio.h>
  int squareArea(int side);
int  rectangleArea(int a,int b);
int circleArea(int rad);
int main(){
  int side=5;
  printf("Area is %d",squareArea(side));




return 0;
}
int squareArea(int side){
  return side*side;
}
int rectangleArea(int a, int b){
  return a*b;
}
int circleArea(int rad){
  3.14*rad*rad;
}