#include <stdio.h>
int main()
{
    int i,divisor, factor, prime = 0;
    long long int num;
    printf("Enter a number:");
    scanf("%lld", &num);
    for ( i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {

            factor = 0;
            for (divisor = 1; divisor <= i; divisor++)
            {
                if (i % divisor == 0)
                {
                    factor++;
                }
                divisor++;
            }
            if (factor == 2)
            {
                prime = i;        
            }
        }
    }
    printf("%d", prime);
    return 0;
}