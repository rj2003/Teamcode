#include<stdio.h>
#include<stdlib.h>
int isEven(const int NUM);
void main(int argc,char*argv[])
{
FILE*a;
FILE*b;
FILE*c;
int num;
a=fopen(argv[1],"r");
b=fopen(argv[2],"w");
c=fopen(argv[3],"w");
fprintf(b,"Even numbers:\n");
fprintf(c,"Odd numbers:\n");
while(fscanf(a,"%d",&num)!=-1)
{
if(isEven(num))
fprintf(b,"%d\n",num);
else
fprintf(c,"%d\n",num);
}
fclose(a);
fclose(b);
fclose(c);
}
int isEven(const int NUM)
{
return!(NUM & 1);
}

