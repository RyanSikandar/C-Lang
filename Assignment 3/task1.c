#include <stdio.h>
#include <string.h>

void constwords(char con[][20])
{
    char words[6][20] = {"happy", "cheerful", "chipper", "effervescent", "jaunty", "jolly"};
    for (int i = 0; i < 6; i++)
    {
        strcpy(con[i], words[i]);
    }
    for (int i = 0; i < 6; i++)
        printf("|%s| ", words[i]);
}
void userwords(int words, char list[100][50])
{
    for (int i = 0; i < words; i++)
    {
        scanf("%s", list[i]);
    }
}
void printuser(int words, char list[100][50])
{
    for (int i = 0; i < words; i++)
    {
        printf("%s ", list[i]);
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
    return 0;
}
