#include<stdio.h>
#include<string.h>
void main ()
{
 char str[20];
 int i, len=0;
 printf("\n Enter a string: ");
 scanf("%s", str);
 for(i=0; str[i] != '\0'; i++)
  {
   len++;
  }
 printf("\n The length of string %s is : %d", str, len);
}
