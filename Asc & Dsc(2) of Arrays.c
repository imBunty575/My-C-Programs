#include<stdio.h>

int main()
{
 int i,j,t,k,a[5];
 printf("Enter the Elements of the Array:-\n");
 for(i=0;i<=4;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("Elements of the array are:-\n");
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