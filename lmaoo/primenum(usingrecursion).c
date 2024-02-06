#include <stdio.h>
#include <stdlib.h>
int i;
int prime(int n);
int main()
{
    system("cls");
    int lmao;
    printf("Enter a number."
           "That you want hebhehe");
    scanf("%d", &lmao);
    i = lmao / 2;
    printf("%d", prime(lmao));
}
int prime(int n)
{
    if (i == 1)
    {
        return 1;
    }
    else if (n % i == 0)st
    {
        return 0;
    }
    else
    {
        i--;
        prime(n);
    }
}