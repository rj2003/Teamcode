#include<stdio.h>
#include<malloc.h>
void main()
{
int i,n,choice,sub=0,sum=0,mul=1;
int *a;
printf("Enter size of array:");
scanf("%d",&n);
a=(int*)malloc(n*sizeof(int));
printf("Enter %d elements:\n",n);
for(i=0;i<n;i++)
{
scanf("%d",a+i);
}
printf("Enter a choice:\n1.Addition\n2.Substraction\n3.Multiplication\n");
scanf("%d",&choice);
do
{
switch(choice)
{
case 3:
{
for(i=0;i<n;i++)
{
mul=mul * *(a+i);
}
printf("\nThe multiplication of the array elements is %d",mul);
break;
}
case 2:
{
for(i=0;i<n;i++)
{
sub=sub - *(a+i);
}
printf("\nThe substraction of the array elements is %d",sum);
break;
}
case 1:
{
for(i=0;i<n;i++)
{
sum=sum + *(a+i);
}
printf("\nThe addition of the array elements is %d",sum);
break;
}
default:
{
printf("\nEnter a valid choice.");
break;
}
}
}while(choice!=4);
}

