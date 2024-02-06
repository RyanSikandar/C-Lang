// Collection of different types of variables comprising of different data types.
#include <stdio.h>
#include <string.h>

struct player
{
    char name[12];
    int score;
    float lmao;
};
int main()
{
    struct player player1;
    struct player player2;

    strcpy(player1.name, "Ryan"); // use strcpy for entering characters=
    player1.score = 4;

    strcpy(player2.name, "qazi");
    player2.score = 0;
    player2.lmao = 5;

    printf("%s\n", player1.name);
    printf("%f\n", player2.lmao);
    printf("%d\n", player1.score);
    return 0;
}