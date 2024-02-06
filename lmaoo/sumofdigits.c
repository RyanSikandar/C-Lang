#include <stdio.h>
int sumofdigits(int);
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d", &a);
    int y = sumofdigits(a);
    printf("%d",y);
}
int sumofdigits(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n % 10 + sumofdigits(n / 10);
    }
}