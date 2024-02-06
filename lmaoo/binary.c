#include <stdio.h>
#include <stdlib.h>
int i = 1;
int j = 7;
int m = 0;
int x;
int sorting(int n, int arr[n]);
int main()
{
    int numbers[7] = {1, 2, 3, 5, 6, 8, 10};
    scanf("%d", &x);
    sorting(7, numbers);
}
int sorting(int n, int arr[n])
{
    while (i < j)
    {
        m = (i + j) / 2;
        if (x > arr[m])
        {
            i = m + 1;
        }
        else
            j = m;
    }
    if (arr[i] == x)
    {
        printf("Location is %d", i + 1);
    }
    else
        printf("Location cannot be found");
}