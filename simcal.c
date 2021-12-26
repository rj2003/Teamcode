#include<stdio.h>
void main()
{
char op;
float a,b;
printf("Enter two numbers to perform operation:");
scanf("%2f %2f",&a,&b);
printf("Enter an operator(+,-,*,/,):");
scanf("%c",&op);
switch (op)
{
case'+':
printf("%2f + %2f = %2f",a,b,a+b);
break;
case'-':
printf("%2f - %2f = %2f",a,b,a-b);
break;
case'*':
printf("%2f * %2f = %2f",a,b,a*b);
break;
case'/':
printf("%2f / %2f = %2f",a,b,a/b);
break;
default:
printf("Error!Operator is not correct.");
}
}
