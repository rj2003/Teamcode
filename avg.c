#include<stdio.h>
int main()
{
int i,n,sum=0,numbers;
float average;

printf("\nplease enter how many numbers you want?\n");
scanf("%d",&n);

printf("\nplease enter the elements one by one\n");
for(i=0;i<n;i++)
{
scanf("%d",&numbers);
sum=sum+numbers;
}
average=sum/n;

printf("\nSum of the %d numbers =%d",n,sum);
printf("\naverage of the %d numbers =%.2f",n,average);

return 0;
}
