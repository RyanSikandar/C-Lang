#include <stdio.h>
#include <string.h>
void GenerateGrid(int rows, int columns, char grid[rows][columns])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            grid[i][j] = '-';
        }
    }
}
void constwords(char con[][20]) // funtion for constant words
{
    char words[6][20] = {"happy", "cheerful", "chipper", "effervescent", "jaunty", "jolly"};
    for (int i = 0; i < 6; i++)
    {
        strcpy(con[i], words[i]);
    }
    // for (int i = 0; i < 6; i++)
    //     printf("|%s| ", words[i]);
}
void userwords(int words, char list[100][50]) // function for inputting the user words
{
    for (int i = 0; i < words; i++)
    {
        scanf("%s", list[i]);
    }
}
void printuser(int words, char list[100][50]) // function for printing user words.
{
    for (int i = 0; i < words; i++)
    {
        printf("%s ", list[i]);
    }
}
void printgrid(int rows,int columns, char grid[rows][columns])
{
    for (int i=0;i<rows;i++)
    {
        for (int j=0;j<columns;j++)
        {
            printf("%c ",grid[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    char con[20][20];
    constwords(con);
    printf("\nEnter the number of words you want to enter:");
    int N;
    scanf("%d", &N);
    char user[100][50];
    userwords(N, user);
    printuser(N, user);
    printf("\nEnter the number of rows:");
    int rows;
    scanf("%d", &rows);
    printf("\nEnter the number of columns:");
    int columns;
    scanf("%d", &columns);
    char grid[rows][columns];
    GenerateGrid(rows, columns, grid);
    printgrid(rows,columns,grid);
}
