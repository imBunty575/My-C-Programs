#include<stdio.h>

int main()
{
  int a,b,i,j;
  printf("Enter Initial Range:");
  scanf("%d",&a);
  printf("Enter Final Range:");
  scanf("%d",&b);
  printf("The Prime Number(s) between the given range is(are):\n");
  for(i=a;i<=b;i++)
  {
   int c=0;
   for(j=1;j<=i;j++)
   {
    if(i%j==0)
    c++;
   }
   if(c==2)
   printf("%d ",i);
  }
  return 0;
}