/*Take an array of 12 integers as input. Create a new array and save only the unique elements of
input array in the new array and display them.*/
// For example: Input array: {5,6,5,7,3,5,7,4,2,6,3,9} , New array: {5,6,7,3,4,2,9
#include <stdio.h>
#include <string.h>
int main()
{
    int arr[12];
    int new_arr[12];
    int j = 0;
    int i = 0;
    int l = 0;
    int unique = 1;
    printf("Enter the numbers:");
    for (int i = 0; i < 12; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (j = 0; j < 12; j++)
    {
        for (int i = 0, k = 12; i < k + 1; i++)
        {
            if (i != j)
            {
                if (arr[j] == arr[i])
                {
                    unique = 0;
                    break;
                }
            }
        }
        if (unique == 1)
        {
            new_arr[l] = arr[j];
            l++;
        }
    }
    printf("The array of unique elements is:");
    // while (new_arr[i] != 0)
    //     i++;
    // int length = 0;
    // length = i;
    // for (int i = 0; i <= length; i++)
    //     printf("%d", new_arr[i]);
    puts(new_arr);
    return 0;
}