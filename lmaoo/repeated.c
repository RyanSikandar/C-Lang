#include <stdio.h>
int main()
{
    int repeated[10] = {0};
    int seen[10] = {0};
    int count[10] = {0};
    printf("Enter a number:");
    int n;
    scanf("%d", &n);
    while (n > 0)
    {
        int rem = n % 10;
        if (seen[rem])
        {
            repeated[rem] = rem;
            count[rem]++;
        }
        else
            seen[rem] = 1;
        n /= 10;
    }
    for (int i = 0; i < 10; i++)
    {
        if (repeated[i])
        {
            printf("%d\n", repeated[i]);
            printf("%d", count[i]);
        }
    }
}