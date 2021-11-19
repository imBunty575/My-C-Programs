#include<stdio.h>
#include<math.h>
int main()
{
 int i=0,a=0,b;
 long long n;
 printf("Enter a Binary Number:");
 scanf("%lld",&n);
 printf("Its Decimal Number is:");
 while(n!=0)
 {
  b=n%10;
  n=n/10;
  a=a+b*pow(2,i);
  ++i;
 }
 printf("%d",a);
 return 0;
}