#include<stdio.h>
void main()
{
int n,i,fact=1;
double sum=0;
printf("Enter the range of numbers:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact*=i;
sum+=fact/i;
}
printf("The sum of the series is %0.2lf",sum);
}

