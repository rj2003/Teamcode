#include<stdio.h>
int main()
{
int n,number,i=0,sum=0;
float avg;
printf("Enter number of elements you want to find sum and avg of:");
scanf("%d",&n);
printf("\nEnter the numbers");
while(i<n)
{
scanf("%d",&number);
sum=sum+number;
i++;
}
avg=sum/n;
printf("\nSum of %d numbers is %d",n,sum);
printf("\nAverage of given numbers is %.2f",avg);
return 0;
}
