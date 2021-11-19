#include <stdio.h>
#include <ctype.h>
int main()
{
  
  int i,n,a=0;
  printf("Enter an Natural Number: ");
  scanf("%d",&n);
  
  for(i=2;i<=n/2;++i)
  {
   if(n%i==0)
   a=1;
   break;
  }
  if(n<=1)
  printf("The entered number is neither Prime nor Composite.");
  else
  {
   if(a==0)
    printf("The entered number is Prime.");
   else
    printf("The entered number is Composite.");
   }
return 0;

 }