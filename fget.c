#include<stdio.h>
void main()
{
FILE*fp;
char ch;
fp=fopen("abc.txt","w");
printf("Enter a string:");
do
{
scanf("%c",ch);
fputc(ch,fp);
}
while(ch!='\n');
}



