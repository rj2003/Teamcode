#include<stdio.h>
void main()
{
 int a[100];
 int lb, ub, mid, i, j, loc, ele, n;
 printf("Enter number of elements ");
 scanf("%d", &n);
 printf("\n Enter elements :");
 for(i=0; i<n; i++)
 {
  scanf("%d", &a[i]);
 }
 printf("Enter value to find :\n");
 scanf("%d", &ele);
 lb=0;
 ub=4;
 mid = (lb + ub)/2;
 while(lb<=ub)
 {
  if(a[mid] < ele)
  {
   lb = mid + 1;
  }
  else if(a[mid] = ele)
  {
   printf("\n Found at location %d", mid + 1);
   break;
  }
  else
  ub = mid-1;
  mid = (lb + ub)/2; 
 }
 if(lb>ub)
 {
  printf("%d is not found in the list", ele);
 }

}
