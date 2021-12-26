#include<stdio.h>
#include "add.h"
void main()
{
int a,b,c,d;
printf("Enter two numbers:");
scanf("%d %d",&a,&b);
c=add(a,b);
printf("\nThe Addition is %d",c);
d=greatest(a,b);
printf("\n  The greatest number is %d",d);
}
