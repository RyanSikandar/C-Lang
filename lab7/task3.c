#include <stdio.h>
int main()
{
    int i, j, rows;
    printf("Enter the number you want to print the half pyramid till: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; ++i)
    {
        for (int space = i; (space < rows) ; space++)
        {
            printf(" \t");
        }
        for (j = 1; j <= i; ++j)
        {
            printf("%d\t", j);
        }
        printf("\n");
    }
    return 0;
}
