#include<stdio.h>

int main()
{
 int n,rem,reverse=0;
 printf("Enter a Number:");
 scanf("%d",&n);
 while(n!=0)
 {
  rem=n%10;
  reverse=reverse*10;
  reverse=reverse+rem;
  n=n/10;
 }
 printf("Reverse of the entered number is %d", reverse);
return 0;
}