#include<stdio.h>
void add()
{
 int a,b;
 /*printf("Enter 1st No:");
 scanf("%d",&a);
 printf("Enter 2nd No:");
 scanf("%d",&b);*/
 
 printf("Sum=%d\n",a+b);
}

int diff(int n1,int n2)
{
 int s;
 s=n1-n2;
 printf("Difference=%d\n",s);
 return s;
}

int mul()
{
 int m,n,o;
 o=m*n;
 printf("Product=%d\n",o);
 return o;
}

void div(int e,int f)
{
 int z;
 z=e/f;
 printf("Division=%d",z);
}

main()
{
 int x=12,y=6;
 void add();
 int diff(int,int);
 int mul();
 void div(int,int);
 add();
 int r=diff(x,y);
 int s=mul();
 div(x,y);
}