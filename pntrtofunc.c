#include<stdio.h>
#include<malloc.h>
void main()
{
int i,n,sum=0;
int *a;
printf("Enter size of array:");
scanf("%d",&n);
a=(int*)malloc(n*sizeof(int));
printf("Enter %d elements:\n",n);
for(i=0;i<n;i++)
{
scanf("%d",a+i);
}
for(i=0;i<n;i++)
{
sum=sum + *(a+i);
}
printf("\nThe addition of the aray elements is %d",sum);
}

