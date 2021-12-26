#include <stdio.h>
void main()
{
    int yr;
    printf("Enter year:");
    scanf("%d", &yr);
    if (yr % 4 == 0)
    {
        printf("\nIt is a leap year.");
    }
    else if (yr % 400 == 0)
    {
        printf("\nIt is a century year.");
    }
    else
    {
        printf("It is not a leap year.");
    }
}