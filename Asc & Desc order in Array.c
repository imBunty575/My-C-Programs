#include<stdio.h>

int main()
{
 int i,j,t,k,a[5]={12,3,1,4,15};
 printf("Elements of the Array are:-\n");
 for(i=0;i<=4;i++)
 {
  printf("%d ",a[i]);
 }
  printf("\n\nElements after sorting:-\na)In Ascending Order:\n");
 
 for(i=0;i<=4;i++)
 {
  for(j=i+1;j<=4;j++)
  {
   if(a[i]>a[j])
   {
   t=a[i];
   a[i]=a[j];
   a[j]=t;
   }
  }
 }
 for(i=0;i<=4;i++)
 {
  printf("%d ",a[i]);
 }
 printf("\nb)In Descending Order:\n");
 for(i=0;i<=4;i++)
 {
  for(j=i+1;j<=4;j++)
  {
   if(a[i]<a[j])
   {
   k=a[i];
   a[i]=a[j];
   a[j]=k;
   }
  }
 }
 for(i=0;i<=4;i++)
 {
  printf("%d ",a[i]);
 }
 return 0;
}