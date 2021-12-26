#include<stdio.h>
void main()
{
FILE*fp;
char ch;
fp=fopen("abc.txt","r");
while(ch!=EOF)
{
ch=fgetc(fp);
printf("%c",ch);
}
fclose(fp);
}


