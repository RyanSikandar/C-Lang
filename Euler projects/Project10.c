#include <stdio.h>
int check_prime(long num);
int main()
{
    long sum = 0;
    for (long i = 1; i < 2000000; i++)
    {
        if (check_prime(i))
            sum += i;
    }
    printf("%ld",sum);
}
int check_prime(long num)
{
    int factor = 0;
    for (long i = 2; i <= num/2; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}