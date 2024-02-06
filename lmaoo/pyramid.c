// program for printing the asterisk pyramid
#include <stdio.h>
int main()
{
    int rows, i, k = 0, space;
    printf("Enter the number of the rows:");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++, k = 0)
    {
        for (space = 1; space <= rows - i; space++)
        {
            printf("  ");
        }
        while (k != 2 * i - 1)
        {
            printf("* ");
            ++k;
        }
        printf("\n");
    }

    return 0;
}