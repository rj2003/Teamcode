#include <stdio.h>
int main()
{
int a[10]={ 10,23,40,1,2,0,14,13,50,9};
int item,i,flag;
printf("Enter item to be searched:");
scanf("%d",&item);
for ( i = 0; i < 10; i++)
{
if (a[i]==item)
{
      flag=i+1;
      break;
}
else
{
      flag=0;
}

}
if (flag!=0)
{
      printf("\nItem found at location %d",flag);
      
}
else
{
      printf("\n Item not found");
}

}