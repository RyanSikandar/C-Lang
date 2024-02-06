#include <stdio.h>
int main()
{
    int i, n = 0, prod = 0, remainder = 0, result = 0, pal = 0;
    for (i = 999; i >= 100; i--)
    {
        for (int j = 999; j >= 100; j--)
        {
            remainder = 0;
            result = 0;
            prod = i * j;
            n = prod;
            while (prod != 0)
            {
                remainder = prod % 10;
                result = result * 10 + remainder;
                prod = prod / 10;
            }

            if (n == result && n > pal)
            {
                pal = result;
                break;
            }
        }
    }
    printf("%d", pal);
    return 0;
}
