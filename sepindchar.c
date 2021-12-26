#include<stdio.h>
#include<string.h>
void main()
{
 char str[20];
 int i=0;
 printf("Enter a string : \n");
 scanf("%s", str);
 printf("String characters are: \n");
 while(str[i] != '\0')
 {
  printf("%c \t", str[i]);
  i++;
 }

}
