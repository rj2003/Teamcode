#include<stdio.h>
int main()
{
int arr[100];
int i,j,size,count=0;
printf("Enter size of array:");
scanf("%d",&size);
printf("Enter elements of the array:");
for(i=0;i<size;i++)
{
scanf("%d ",&arr[i]);
}
for(i=0;i<size;i++)
{
for(j=i+1;j<size;j++)
{
if(arr[i]==arr[j])
{
count++;
break;
}
}
}
printf("Total no of duplicate elements: %d",count);
return 0;
}


