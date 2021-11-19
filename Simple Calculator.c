/*Simple Calculator*/
#include <stdio.h>
int main()
{
  char operator;
  double FirstNo,SecondNo;
  printf("Enter an operator(+,-,*,/): ");
  scanf("%c",& operator);
  printf("Enter First Number: ");
  scanf("%lf",&FirstNo);
  printf("Enter Second Number: ");
  scanf("%lf",&SecondNo);
  
  switch(operator)
  {
    case'+':
    printf("%.2lf+%.2lf=%.2lf",FirstNo,SecondNo,FirstNo+SecondNo);
    break;
    case'-':
    printf("%.2lf-%.2lf=%.2lf",FirstNo,SecondNo,FirstNo-SecondNo);
    break;
    case'*':
    printf("%.2lf*%.2lf=%.2lf",FirstNo,SecondNo,FirstNo*SecondNo);
    break;
    case'/':
    printf("%.2lf/%.2lf=%.2lf",FirstNo,SecondNo,FirstNo/SecondNo);
    break;
    default:
    printf("Error! Operator is not Correct.");
  }

  return 0;

 }
   