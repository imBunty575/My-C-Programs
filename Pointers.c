#include<stdio.h>

int main()
{
 int x,y;
 int *ptr;
 x=10;
 ptr=&x;
 y=*ptr;
 printf("Value of x=%d",x);  
 printf("\n%d is stored at address %u",x,&x);
 printf("\n%d is stored at address %u",*&x,&x);
 printf("\n%d is stored at address %u",*ptr,ptr);
 printf("\n%u is stored at address %u",ptr,&ptr); 
 printf("\n%d is stored at address %u",y,&y);
 *ptr=25;
 printf("\nNow x=%d",x);
 return 0;
}