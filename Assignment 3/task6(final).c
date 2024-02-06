#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>
// globally defined variables.
int randrow, randcol, direction;
// List of all the functions used in the program.
void Userwords(int enteries, char words[enteries][50]);
void printuser(int enteries, char words[enteries][50]);
void Generategrid(int row, int col, char grid[row][col]);
void printgrid(int row, int col, char grid[row][col]);
void placeWords(int row, int column);
void placeWord(int direction, int pos_i, int pos_j, char word[], int row, int col, char grid[row][col]);
bool IsWordPlacable(int direction, int pos_i, int pos_j, int row, int col, char word[]);
bool CheckWordWillFit(int randrow, int randco, char words[], int direction, int row, int columns, char grid[row][columns]);
int main()
{
    // for time function.
    srand(time(NULL));
    int entry, row, col;
    printf("Enter the no of words you want in your grid: ");
    scanf("%d", &entry);
    char words[entry][50];
    Userwords(entry, words);
    printf("\nEnter no. of rows and columns in the grid: ");
    scanf("%d %d", &row, &col);
    char grid[row][col];
    Generategrid(row, col, grid);
    printgrid(row, col, grid);
    printf("\n\n");
    // for all the words to fit inside the grid.
    for (int i = 0; i < entry; i++)
    {
        do
        {
            placeWords(row, col);
        } while (!(IsWordPlacable(direction, randrow, randcol, row, col, words[i]) && CheckWordWillFit(randrow, randcol, words[i], direction, row, col, grid)));
        // Only places if test is passed.
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
    // Directions guide:
    // 1 for down to up,2 for up to down,3 for left to right,4 for right to left
    direction = rand() % (4 + 1 - 1) + 1;
    randrow = rand() % (row - 1) + 1;
    randcol = rand() % (column - 1) + 1;
}
// checks for the placability of words.
bool IsWordPlacable(int direction, int randr, int randco, int row, int col, char word[])
{
    int len = strlen(word);
    switch (direction)
    {
    case 1:
        if (randr + 1 >= len)
        {
            return true;
        }
        break;
    case 2:
        if (row - (randr + 1) >= len)
        {
            return true;
        }
        break;
    case 3:
        if (col - (randco + 1) >= len)
        {
            return true;
        }
        break;
    case 4:
        if (randco + 1 >= len)
        {
            return true;
        }
        break;
    }
    return false;
}
// places the words.
void placeWord(int direction, int randr, int randco, char word[], int row, int col, char grid[row][col])
{
    switch (direction)
    {
    case 1:
        for (int i = 0; word[i] != '\0'; i++, randr--)
        {
            grid[randr][randco] = word[i];
        }
        break;
    case 2:
        for (int i = 0; word[i] != '\0'; i++, randr++)
        {
            grid[randr][randco] = word[i];
        }
        break;
    case 3:
        for (int i = 0; word[i] != '\0'; i++, randco++)
        {
            grid[randr][randco] = word[i];
        }
        break;
    case 4:
        for (int i = 0; word[i] != '\0'; i++, randco--)
        {
            grid[randr][randco] = word[i];
        }
        break;
    }
}
//Checks if the space is not already occupied.
bool CheckWordWillFit(int randrow, int randco, char words[], int direction, int row, int columns, char grid[row][columns])
{
    bool flag;
    int length = strlen(words);
    switch (direction)
    {
    case 3:
    {
        for (int i = randco; i < (length + randco); i++)
        {
            if (grid[randrow][i] == '-')
            {
                flag = true;
            }
            else
            {
                flag = false;
                break;
            }
        }
        break;
    }
    case 1:
    {
        for (int i = randrow; i > (randco - length); i--)
        {
            if (grid[i][randcol] == '-')
            {
                flag = true;
            }
            else
            {
                flag = false;
                break;
            }
        }
        break;
    }
    case 4:
    {
        for (int i = randco; i > (randco - length); i--)
        {
            if (grid[randrow][i] == '-')
            {
                flag = true;
            }
            else
            {
                flag = false;
                break;
            }
        }
        break;
    }
    case 2:
    {
        for (int i = randrow; i < (randrow + length); i++)
        {
            if (grid[i][randcol] == '-')
            {
                flag = true;
            }
            else
            {
                flag = false;
                break;
            }
        }
        break;
    }
    }
    if (flag)
        return true;
    else
        return false;
}
