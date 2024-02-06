#include <stdio.h>
int main()
{

    int L;
    printf("Enter the desired length of the array:\n");
    scanf("%d", &L);

    int arr[L];
    printf("Enter elements of the array:\n");
    for (int i = 0; i < L; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < L - 1; i++)
    {
        for (int j = i + 1; j < L; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for (int i = 0; i < L; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}
