/*215 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

What is the sum of the digits of the number 21000?*/

#include <stdio.h>
#include <math.h>
long sumofdigits(long);
int main()
{
    long x = pow(2, 1000);
    long y = sumofdigits(x);
    printf("%d", y);
}
long sumofdigits(long a)
{
    if (a == 0)
    {
        return 0;
    }
    else
        return a % 10 + sumofdigits(a / 10);
}