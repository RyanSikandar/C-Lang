#include <stdio.h>
#include <math.h>
int main()
{
    long  natural_num = 0;
    long traingular_num = 0;
    int divisor = 0;
    while (1)
    {
        divisor = 0;
        natural_num++;
        traingular_num += natural_num;
        for (long i = 1; i < (int)floor(sqrt(traingular_num)); i++)
        {
            if (traingular_num % i == 0)
                divisor += 2;
            if ((int)floor(sqrt(traingular_num)) * (int)floor(sqrt(traingular_num)) == traingular_num)
                divisor--;
        }
        if (divisor > 500)
        {
            break;
        }
    }
    printf("%ld\n%d", traingular_num,divisor);
}