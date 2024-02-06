#include <stdio.h>
int main()
{
    int i,sum=0,prod=0;
    for (i=1;i<=100;i++)
    {
        sum+=i;
        prod+=(i*i);
    }
    sum*=sum;
    int diff=0;
    diff=prod-sum;
    printf("%d",-diff);
}