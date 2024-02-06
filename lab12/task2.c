#include <stdio.h>
float avg(int arr[], int, int);
int main()
{
    int arr[3] = {9, 6, 7};
    float average = avg(arr, 3, 3);
    printf("Average of elements is %.2f", average);
}
float avg(int arr[], int r, int size)
{
    if (r == size)
        return (arr[r - 1] + avg(arr, r - 1, size)) / size;

    if (r == 1)
        return arr[r - 1];

    return (arr[r - 1] + avg(arr, r - 1, size));
}
