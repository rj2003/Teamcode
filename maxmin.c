#include<stdio.h>
int main()
{
int arr[100];
int i,max,min,n;
printf("Enter no elements in the array:");
scanf("%d",&n);
printf("Enter %d elements of the array:",n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
max=arr[0];
min=arr[0];
for(i=1;i<n;i++)
{
if(arr[i]>max)
{
max=arr[i];
}
if(arr[i]<min)
{
min=arr[i];
}
}
printf("Maximun element of the array is %d\n",max);
printf("Minimum element of the array is %d",min);
return 0;
}


