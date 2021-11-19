#include<stdio.h>
#include<string.h>

int main()
{
   char str1[]="Hello",str2[]="Gdmrng";
   puts(str1);
   puts(str2);
   printf("Concatenated string=%s",strcat(str1,str2));
   printf("\nUsing Strncat:%s",strncat(str1,"Beautiful",5));
   printf("\nLength=%ld",strlen(str1));
   return 0;
}