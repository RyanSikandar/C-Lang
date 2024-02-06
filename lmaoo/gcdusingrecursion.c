#include <stdio.h>
int gcd(int a, int b);
int main()
{
    int a;
    int b;
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);
    int uwu = gcd(a, b);
    printf("%d", uwu);
}
int gcd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            return (a - b, b);
        }
        else
            return (b - a, a);
    }
    return a;
}