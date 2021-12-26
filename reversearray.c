#include<stdio.h>
int main()
{
int n,i,a[100];
printf("Enter number of elements:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nEnter %d elements",n);
scanf("%d",&a[i]);
}
printf("\nThe given array is:");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
printf("The given array in reverse order are:");
for(i=n-1;i>=0;i--)
{
printf("%d",a[i]);
}
return 0;
}
