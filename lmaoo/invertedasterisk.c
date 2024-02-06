#include <stdio.h>
int main()
{
    int rows, i, j, space,k;
    printf("Enter the number of rows:");
    scanf("%d", &rows);
    for (i = rows; i >= 1; i--,k=0)
    {
        for (space = 1; space <= rows - i; space++)
        {
            printf("  ");
        }
        while (k != i * 2 - 1)
        {
            printf("* ");
            k++;
        }
        printf("\n");
    }
}