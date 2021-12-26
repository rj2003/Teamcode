#include<stdio.h>
struct employee
{
char name[50];
float bs,hra,ns;
int wages,days;
};
int main()
{
int n,i;
printf("Enter number of employee's : ");
scanf("%d",&n);
struct employee e[n];
for(i=0;i<n;i++)
{
printf("\nEnter employee name : ");
scanf("%s",e[i].name);
printf("\nEnter daily wage:");
scanf("%d",&e[i].wages);
printf("Enter no. of days worked:");
scanf("%d",&e[i].days);
e[i].bs=e[i].wages*e[i].days;
e[i].hra=e[i].bs*0.15;
e[i].ns=e[i].hra+e[i].bs;
}
for(i=0;i<n;i++)
{
printf("Employee name : %s\nBase Salary : %f\nHRA : %f\nNet Salary : %f\n",e[i].name,e[i].bs,e[i].hra,e[i].ns);
}
}
