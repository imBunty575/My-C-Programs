/*Area & Perimeter of a Circle*/
#include<stdio.h>
#define PI 3.14
int main()
 {
   float r,area,perimeter;
   printf("Enter the radius of the circle:",r);
   scanf("%f",&r);
   perimeter=2*PI*r;
   printf("Perimeter=%f",perimeter);
   area=PI*r*r;
   printf("\nArea=%f",area); 
   return 0;
 }