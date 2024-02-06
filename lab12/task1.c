#include <stdio.h>
int main()
{
    printf("Enter a number:");
    int n;
    scanf("%d", &n);
    int x = sum(n);
    printf("The sum from 1 to %d is:%d", n, x);
}
int sum(n)
{
    if (n == 1)
        return 1;
    else
        return (n + sum(n - 1));
}