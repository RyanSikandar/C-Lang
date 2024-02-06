// Write a program in C to insert New value in the array (sorted list ).
#include <stdio.h>
#include <string.h>
void sort(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
void printarr(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}
int main()
{
    int n;
    printf("How many integers do you want to enter:");
    scanf("%d", &n);
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number you want to enter in the array:");
    scanf("%d", &arr[n]);
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, size);
    printarr(arr, size);
}