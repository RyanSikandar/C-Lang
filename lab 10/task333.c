#include<stdio.h>
int main()
{
    int i, j, arr[12], new_arr[12], count;
    printf("Enter 12 elements in an array: ");
    for(i=0; i<12; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Putting unique elements in new array
    for(i=0; i<12; i++)
    {
        count = 0;
        for(j=0; j<i; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }
        if(count == 0)
        {
            new_arr[i] = arr[i];
        }
    }
    // Displaying new array
    printf("\nNew array with unique elements: ");
    for(i=0; i<12; i++)
    {
        if(new_arr[i] != 0)
        {
            printf("%d ", new_arr[i]);
        }
    }
    return 0;
}