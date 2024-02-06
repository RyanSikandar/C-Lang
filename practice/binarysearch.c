#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 7, 8, 9, 10};
    int i = 1;
    int j = 10;
    int m=0;
    int x = 0;
    scanf("%d", &x);
    while (i < j)
    {
        m = (i + j) / 2;
        if (x > arr[m])
            i = m + 1;
        else
            j = m;
    }
    if (x = arr[i])
    {
        printf("%d", i);
    }
    else
    {
        printf("Loc not found");
    }
    return 0;
}