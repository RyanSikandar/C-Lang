#include <stdio.h>
int main()
{
    int rows;
    char i,j;
    printf("Enter the number of rows you want:");
    scanf("%d",&rows);
    for (i='a';i<=rows;i++)
    {
        for (j='a';j<=i;j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }


}