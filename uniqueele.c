#include <stdio.h>
void main()
{
    int arr1[100], n, count = 0;
    int i, j, k;
    printf("\n\nPrint all unique elements of an array:\n");
    printf("------------------------------------------\n");
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }
    printf("\nThe unique elements found in the array are: \n");
    for (i = 0; i < n; i++)
    {
        count = 0;
        for (j = 0, k = n; j < k + 1; j++)
        {
            /*Increment the counter when the seaarch value is duplicate.*/
            if (i != j)
            {
                if (arr1[i] == arr1[j])
                {
                    count++;
                }
            }
        }
        if (count == 0)
        {
            printf("%d ", arr1[i]);
        }
    }
    printf("\n\n");
}