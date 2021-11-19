#include<math.h>
#define PI 3.14
#define MAX 180
int main()
{
 float values,valuec,valuet,x,y,z;
 int angle=0;
 printf("Angle\tSin(Angle)  Cos(Angle)  Tan(Angle)");
 while(angle<=MAX)
 {
  y=(PI/MAX)*angle;
  values=sin(y);
  valuec=cos(y);
  valuet=tan(y);
  printf("\n%d\t%.2f        %.2f        %.2f",angle,values,valuec,valuet);
  angle=angle+10;
 }
  return 0;

 }