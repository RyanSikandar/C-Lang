#include <stdio.h>
int main()
{
    int n, i = 0, sum = 0;
    printf("Enter a natural number till which the sum is to be calculated:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("%d",sum);
    return 0;
}