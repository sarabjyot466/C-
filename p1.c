#include <stdio.h>

int main (){
   
   int a;
   
   printf("enter the value of a");
   
   scanf("%d",&a);
   
   int*ptr;
   ptr=&a;
   
   printf("the value of a is %d\n",*ptr);
   
   printf("the address of a is %d",ptr);
   
   return 0;
   