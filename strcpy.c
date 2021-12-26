#include<stdio.h>
#include<string.h>
void main()
{
 char str1[20], str2[20];
 int i=0;
 printf("Enter two strings: \n");
 scanf("%s", str1);
 scanf("%s", str2);
 while(str1[i] == str2[i] && str1[i] != '\0')
 i++;
 if(str1[i] > str2[i])
  printf("str1 > str2");
 else if(str1[i] < str2[i])
  printf("str1 < str2");
 else
  printf("str1 = str2");

}
 
