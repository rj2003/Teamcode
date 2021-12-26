#include<stdio.h>
struct member
{
char name[30];
int age;
};
void main()
{
struct member*memberptr,member1;
memberptr=&member1;
printf("Enter name :");
scanf("%s",memberptr->name);
printf("\nEnter age:");
scanf("%d",&memberptr->age);
printf("\nDisplaying:");
printf("\nName: %s\n",memberptr->name);
printf("Age: %d\n",memberptr->age);
}

