#include <stdio.h>

int main()
{
    char output[100];
    int j = 0;
    int counter;
    while (1)
    {
        char a;
        int b;
        scanf("%c%d", &a, &b);
        if (a == '\n')
        {
            break;
        }
        else
        {
            for (int i = 0; i < b; i++, j++)
            {
                output[j] = a;
            }
        }
        counter = j;
    }
    for (int i = 0; i < counter; i++)
    {
        printf("%c", output[i]);
    }
    return 0;
}
