#include <stdio.h>
int main()
{
    int rows,i,j;
    printf("Enter the number of rows you want:");
    scanf("%d",&rows);
    for (i=rows;i>=1;i--)
    {
        for (j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }


}