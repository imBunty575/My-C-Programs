#include<stdio.h>

int main()
{
 int n,org_int,reminder,rev_int=0;
 printf("Enter a Number:");
 scanf("%d",&n);
 org_int=n;
 while(n!=0)
 {
  reminder=n%10;
  rev_int=rev_int*10+reminder;
  n=n/10;
 }
 if(org_int==rev_int)
  printf("%d is a Palindrome Number.",org_int);
 else
  printf("%d is not a Palindrome Number.",org_int);
 return 0;
}