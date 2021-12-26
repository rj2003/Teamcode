#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
 char str[20];
 int i=0;
 printf("Enter a string: ");
 scanf("%s", str);
 i = strlen(str);
 printf("Characters in string are: \n");
 for(str[i] = '\0'; i >= 0; i--)
 {
  printf("%c \t", str[i]);
 }

} 
