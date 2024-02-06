#include <stdio.h>
int max(int arr[], int i, int size);
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int y = max(arr, 0, 7);
    printf("%d", y);
}
int max(int arr[], int i, int size)
{
    if (i == (size - 1))
    {
        return arr[i];
    }
    else
    {
        int x = max(arr, i + 1, size);
        return ((arr[i] > x) ? arr[i] : x);
    }
}