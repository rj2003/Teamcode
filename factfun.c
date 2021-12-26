#include<stdio.h>
int fact(int);
void main()
{
int sum;
sum=fact(1)/1+fact(2)/2+fact(3)/3+fact(4)/4+fact(5)/5;
printf("Find the sum of 1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5");
printf("\n\nThe sum of the given series is : %d",sum);
}
int fact(int n)
{
int a=0,b=1;
while(a<=n-1)
{
b=b+b*a;
a++;
}
return b;
}

