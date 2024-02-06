#include <stdio.h>
int main ()
//first loop is for rows 
//second is for columns
{
    int rows, columns;
    printf("Enter the number of rows you want in your shape");
    scanf("%d",&rows);
    //printf("Enter the number of columns you want to print");
    //scanf("%d",&columns);
    for (int i=0;i<rows;i++)
    {   
        for (int j=0;j<=i;j++)
        {
            printf("%d",j+1);
        }
        printf("\n");
    }

}