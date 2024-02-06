#include <stdio.h>

// Lab 10
// Task 4

int main()
{

    int l1, l2, i, j;
    int c[50], k = 0, x, count = 0;

    printf("Enter length of first array:\n");
    scanf("%d", &l1);

    printf("Enter elements of first array:\n");

    int input_array[l1];

    for (i = 0; i < l1; i++)
    {
        scanf("%d", &input_array[i]);
    }

    printf("Enter length of second array:\n");
    scanf("%d", &l2);

    printf("Enter elements of second array:\n");

    int input_array2[l2];

    for (i = 0; i < l2; i++)
    {
        scanf("%d", &input_array2[i]);
    }

    for (i = 0; i < l1; i++)
    {
        for (j = 0; j < l2; j++)
        {
            if (input_array[i] == input_array2[j])
            {
                count = 0;
                for (x = 0; x < k; x++)
                {
                    if (input_array[i] == c[x])
                        count++;
                }
                if (count == 0)
                {
                    c[k] = input_array[i];
                    k++;
                }
            }
        }
    }

    printf("\nThe following are the elements that are common in both the arrays: \n");
    for (i = 0; i < k; i++)
    {
        if (i == (k - 1))
            printf("%d", c[i]);
        else
            printf("%d, ", c[i]);
    }
    return 0;
}
