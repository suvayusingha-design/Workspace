 #include<stdio.h>
 void arrayRev(int arr[]){
   int temp;
   for(int i=0;i<7/2;i++){
      temp = arr[i];
      arr[i]=arr[7-i-1];
      arr[7-i-1]=temp;
   }
 }
 void arrayPrint(int arr[]){
   for(int i=0;i<7;i++){
      printf("The value of element %d id %d\n",i,arr[i]);
   }

 }
 int main(){
   int arr[]={1,2,3,4,5,6,7};
   printf("before reverse\n");
   arrayPrint(arr);
   arrayRev(arr);
   printf("After reverse\n");
   arrayPrint(arr);
   return 0;
 }