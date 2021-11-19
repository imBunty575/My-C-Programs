#include<stdio.h>

int main()
{
 int i,n,a[10];
 printf("Enter a Decimal Number:");
 scanf("%d",&n);
 printf("Its Binary Number is:");
 for(i=0;n>0;i++)
 {
  a[i]=n%2;
  n=n/2;
 }
 for(i=i-1;i>=0;i--)
 printf("%d",a[i]);
 return 0;
}