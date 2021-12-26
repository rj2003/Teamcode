#include<stdio.h>
void main()
{
int marks;
printf("enter marks of the student:");
scanf("%d",&marks);
if(marks<0 || marks>100)
{
printf("Wrong Entry");
}
else if(marks>=80 && marks<=100)
printf("Student secured Distinction");
else if(marks>=60 && marks<=79)
printf("Student secured First Class");
else if(marks>=50 && marks<=59)
printf("Student secured Second Class");
else if(marks>=40 && marks<=49)
printf("Student secured Third Class");
else
printf("Student has failed.");
}

