#include <stdio.h>

int main()
{
    int arr1[12], unique = 0;
    int i, j, k;
    int finalarr[12];
    int count = 0;

    printf("Input 12 elements in the array:\n");
    for (i = 0; i < 12; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("The unique elements found in the array are:\n");

    for (i = 0; i < 12; i++)
    {
        unique = 0;
        for (j = 0, k = 12; j < k + 1; j++)
        {
            if (i != j)
            {
                if (arr1[i] == arr1[j])
                {
                    unique++;
                }
            }
        }
        if (unique == 0)
        {
            finalarr[count] = arr1[i];
            count++;
        }
    }

    for (i = 0; i < count; i++)
    {
        printf("%d,", finalarr[i]);
    }

    printf("\n");
    return 0;
}
