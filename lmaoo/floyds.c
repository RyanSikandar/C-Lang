#include <stdio.h>
int main()
{
    int i, j, k = 1, rows = 0;
    printf("Enter the number of rows you want:");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++, k++)
        {
            printf("%d ", k);
        }
        printf("\n");
    }
}