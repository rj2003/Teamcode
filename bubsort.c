#include<stdio.h>
void main()
{
 int a[100];
 int i, j, k, n;
 printf("Enter number of elements ; ");
 scanf("%d", &n);
 printf("Enter elements : ");
 for(k=0; k<n; k++)
 {
  scanf("%d", &a[k]);
 }
 for(i=0; i<n-1; ++i)
 {
  int swap = 0;
 
 for(j=0; j<(n-i-1); ++j)
  if(a[j]>a[j+1])
{
int temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
swap=1;
}
if(!swap)
break;
}
printf("\nThe array after sorting is :");
for(i=0;i<n;++i)
{
printf("%d \t",a[i]);
}
}
