#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
int randrow, randcol, direction;

void Userwords(int enteries, char words[enteries][50]);
void printuser(int enteries, char words[enteries][50]);
void Generategrid(int row, int col, char grid[row][col]);
void printgrid(int row, int col, char grid[row][col]);
void placeWords(int row, int column);
void placeWord(int direction, int pos_i, int pos_j, char word[], int row, int col, char grid[row][col]);
bool IsWordPlacable(int direction, int pos_i, int pos_j, int row, int col, char word[]);

int main()
{
    srand(time(NULL));

    int enteries, row, col;
    printf("enter the number of enteries: ");
    scanf("%d", &enteries);
    char words[enteries][50];
    Userwords(enteries, words);
    printf("\nEnter no. of rows and columns: ");
    scanf("%d %d", &row, &col);
    char grid[row][col];
    Generategrid(row, col, grid);
    printgrid(row, col, grid);
    printf("\n");
    for (int i = 0; i < enteries; i++)
    {
        do
        {
            placeWords(row, col);
        } while (!(IsWordPlacable(direction, randrow, randcol, row, col, words[i])));
        placeWord(direction, randrow, randcol, words[i], row, col, grid);
    }
    printgrid(row, col, grid);
}
void Userwords(int enteries, char words[enteries][50])
{
    for (int i = 0; i < enteries; i++)
    {
        scanf("%s", words[i]);
    }
}
void printuser(int enteries, char words[enteries][50])
{
    for (int i = 0; i < enteries; i++)
    {
        printf("\"%s\" ", words[i]);
    }
}
void Generategrid(int row, int col, char grid[row][col])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            grid[i][j] = '-';
        }
    }
}
void printgrid(int row, int col, char grid[row][col])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%c ", grid[i][j]);
        }
        printf("\n");
    }
}
void placeWords(int row, int column)
{
    direction = rand() % (4 + 1 - 1) + 1; // 1 for up;2 for down;3 for right;4 for left
    randrow = rand() % (row - 1) + 1;
    randcol = rand() % (column - 1) + 1;
}
bool IsWordPlacable(int direction, int pos_i, int pos_j, int row, int col, char word[])
{
    int len = strlen(word);
    switch (direction)
    {
    case 1:
        if (pos_i + 1 >= len)
        {
            return true;
        }
        break;
    case 2:
        if (row - (pos_i + 1) >= len)
        {
            return true;
        }
        break;
    case 3:
        if (col - (pos_j + 1) >= len)
        {
            return true;
        }
        break;
    case 4:
        if (pos_j + 1 >= len)
        {
            return true;
        }
        break;
    }
    return false;
}
void placeWord(int direction, int pos_i, int pos_j, char word[], int row, int col, char grid[row][col])
{
    switch (direction)
    {
    case 1:
        for (int i = 0; word[i] != '\0'; i++, pos_i--)
        {
            grid[pos_i][pos_j] = word[i];
        }
        break;
    case 2:
        for (int i = 0; word[i] != '\0'; i++, pos_i++)
        {
            grid[pos_i][pos_j] = word[i];
        }
        break;
    case 3:
        for (int i = 0; word[i] != '\0'; i++, pos_j++)
        {
            grid[pos_i][pos_j] = word[i];
        }
        break;
    case 4:
        for (int i = 0; word[i] != '\0'; i++, pos_j--)
        {
            grid[pos_i][pos_j] = word[i];
        }
        break;
    }
}