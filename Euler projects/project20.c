#include <stdio.h>
long sumofdigits(long);
long factorial(int);
int main()

{
    int n = 10;
    long fact = factorial(n);
    printf("%ld\n", fact);
    printf("%ld", sumofdigits(fact));
}

long sumofdigits(long n)
{
    if (n == 0)
        return 0;
    return (n % 10 + sumofdigits(n / 10));
}

long factorial(int a)
{
    if (a >= 1)
        return a * factorial(a - 1);
    else
        return 1;
}