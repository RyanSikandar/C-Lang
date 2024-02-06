#include <stdio.h>
int main()
{
    int rem=0, n, result=0;
    int i=1;
    scanf("%d",&n);
    while (n)
    {
        rem = n % 2;
        n = n / 2;
        result = result + rem *i;
        i*=10;

    }
    printf("%d",result);
    
}