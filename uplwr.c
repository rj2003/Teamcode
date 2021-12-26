#include<stdio.h>
void main()
{
int row,col,r,c,mat[10][10];
printf("Enter no of rows and columns:");
scanf("%d %d",&row,&col);
printf("\nEnter the elements of the matrix:");
for(r=0;r<row;r++)
{
for(c=0;c<col;c++)
{
scanf("%d",&mat[r][c]);
}
}
printf("\nThe lower triangular matrix is:\n");
for(r=0;r<row;r++)
{
printf("\n");
for(c=0;c<col;c++)
{
if(r>=c)
{
printf("%d\t",mat[r][c]);
}
else
{
printf("0");
printf("\t");
}
}
}
printf("\n\n The upper triangular matrix is:");
for(r=0;r<row;r++)
{
printf("\n");
for(c=0;c<col;c++)
{
if(r>c)
{
printf("0");
printf("\t");
}
else
{
printf("%d\t",mat[r][c]);
}
}
}
}

