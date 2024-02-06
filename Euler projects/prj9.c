#include <stdio.h>
int main()
{
    int a, b, c, sum=0,prod=0;
    for (a = 1; a <= 333; a++)
    {
        for (b = a; b <= 666; b++)
        {
            int c= (1000-a-b);
            if (c*c==a*a+b*b)
            {
                printf("%d",a*b*c);
                break;
            }
           
        }
    }
return 0;}