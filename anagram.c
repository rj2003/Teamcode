#include<stdio.h>
#include<string.h>
int main()
{
char str1[10],str2[10];
int len,len1,len2,i,j,not_found=0,found=0;
printf("Enter string 1 : ");
scanf("%s",str1);
printf("Enter string 2 : ");
scanf("%s",str2);
len1=strlen(str1);
len2=strlen(str2);
if(len1==len2)
{
len=len1;
for(i=0;i<len;i++)
{
for(j=0;j<len;j++)
{
if(str1[i]==str2[j])
{
found=1;
break;
}
}
if(found==0)
{
not_found=1;
break;
}
}
if(found==1)
printf("\nThe given strings are anagram.");
else
printf("\nThe given strings are not anagram.");
}
else
printf("The strings need to be of same length to be an anagram string.");
return 0;
}
