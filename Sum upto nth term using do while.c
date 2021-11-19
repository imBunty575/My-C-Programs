#include<stdio.h>

int main()
{
 int num,i=1,sum=0;
 printf("Enter the nth Term:");
 scanf("%d",&num);
 do
 {
  sum=sum+i;
  i++;
 }
 while(i<=num);
 printf("Sum upto %dth Term is=%d",num,sum);
 return 0;
}