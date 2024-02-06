#include <stdio.h>
int main()
{
    int result = 0, original, x, remainder = 0, exp, i, num;
    printf("Enter a number:");
    scanf("%d", &original);
    num = original;
    x = original;
    for (i = 0; original != 0; i++)
    {
        original /= 10;
    }
    for (int j = 0; j <= i; j++)
    {
        remainder = num % 10;
        float pow = 1.0;
        exp = i;
        while (exp != 0)
        {

            pow *= remainder;
            exp--;
        }
        result += pow;
        num /= 10;
    }
    if (result == x)
    {
        printf("The number is an armstrong number");
    }
}