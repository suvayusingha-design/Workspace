 #include<stdio.h>
 #include<stdlib.h>
 int main(){
    int *ptr;
    
    ptr = (int*) calloc (5 ,sizeof(int));

    printf("Enter numbers : ");
    for(int i=0;i<5;i++){
        scanf("%d", &ptr[i]);
    }

    ptr = realloc(ptr, 6 * sizeof(int));
    printf("Enter numbers : ");
    for(int i=0;i<6;i++){
        scanf("%d", &ptr[i]);
    }

    for(int i=0;i<6;i++){
        printf("number is %d\n",ptr[i]);

    }
return 0;
 }