#include<stdio.h>

int main()
{
 int x,*p,y;
 x=10;
 p=&x;
 y=*p;
 *p=25;
 printf("value of p=%u",p);
 printf("\nvalue of y=%u",y);
 printf("\nvalue of *p=%u",*p);
 printf("\nvalue of x=%u",x);
 return 0;
}