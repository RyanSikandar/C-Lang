#include <stdio.h>
int main()
{
    int n1, n2,lcm,mult;
    printf("Enter two numbers:");
    scanf("%d,%d", &n1, &n2);
    n1 = (n1 < 0) ? -n1 : n1;
    n2 = (n2 < 0) ? -n2 : n2;
    mult=(n1*n2);
    while (n1 != n2)
    {
        if (n1 > n2)
        {
            n1 -= n2;
        }
        else
        {
            n2 -= n1;
        }
    }
    printf("The GCD is %d", n1);
    lcm = mult/n1;
    printf("\nThe lcm is %d",lcm);
    return 0;
}