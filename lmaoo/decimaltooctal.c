#include <stdio.h>
int main()
{
    int rem=0, n, result=0;
    int i=1;
    scanf("%d",&n);
    while (n)
    {
        rem = n % 8;
        n = n / 8;
        result = result + rem *i;
        i*=10;

    }
    printf("%d",result);
    
}