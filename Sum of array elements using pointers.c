#include<stdio.h>

int main()
{
 int i=0,*p,sum=0,a=0;
 int x[5];
 printf("Enter Array Elements:\n");
 for(;i<5;i++)
 {
  scanf("%d",&x[i]);
 }
 p=x;
 printf("Element   Value   Address\n");
 while(a<5)
 {
  printf("x[%d]      %d       %u\n",a,*p,p);
  sum=sum+ *p;
  a++, p++;
 }
 printf("Sum=%d",sum);
 return 0;
}