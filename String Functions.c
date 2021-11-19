#include<stdio.h>
#include<string.h>

int main()
{
    char n[10]="Hi";
    char m[20]="Hello";
    int result;
    printf("\nLength of string 'n' is:%d",strlen(n));
    printf("\nLength of string 'm' is:%d",strlen(m));
    result=strcmp(n,m);
    printf("\nAfter comparison:%d",result);
    strcat(n,m);
    printf("\nConcatenated string is:%s",n);
    strncat(n,"Satyajeet",5);
    printf("\nUsing strncat:%s",n);
    
    strcpy(m,n);
    printf("\nCopied string is:%s",m);
    
    return 0;
}    