#include<stdio.h>
#define MAXVAL 15
#define COUNT 11
int main()
{
   float value[MAXVAL];
   int i,low,high;
   int group[COUNT]={0};
   for(i=0;i<MAXVAL;i++)
   {
    scanf("%f",&value[i]);
    ++group[(int)(value[i])/10];
   }
   printf("\n");
   printf("GROUP   RANGE   FREQUENCY\n");
   for(i=0;i<COUNT;i++)
   {
    low=i*10;
    if(i==100)
    high=100;
    else
    high=low+9;
    printf(" %2d  %3d to %3d     %d\n",i+1,low,high,group[i]);
   }
    return 0;
}