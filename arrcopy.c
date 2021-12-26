#include<stdio.h>
int main()
{
int i,a1[]={1,2,3,4,5};
int length =sizeof(a1)/sizeof(a1[0]);
int a2[length];
for(i=0;i<length;i++);
{
a2[i]=a1[i];
}
printf("Elements of orignal array:\n");
for(i=0;i<length;i++);
{
printf("%d",a1[i]);
}
printf("\n");
printf("Elements of array 2:");
for(i=0;i<length;i++)
{
printf("%d",a2[i]);
}
return 0;
}

