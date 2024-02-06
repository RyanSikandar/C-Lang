//Program to check for repeated numbers.
#include <stdio.h>
int repeated_numbers(long n)
{
    int lmao[100]={0};
    while(n>0)
    {
        int rem;
        rem=n%10;
        if(lmao[rem])
        {
            printf("%d is repeated\n",rem);
        }
        else
        {
            lmao[rem]=1;
        }
        n/=10;
    }
}
int main()
{
    long lmao;
    printf("Enter a number:");
    scanf("%ld",&lmao);
    repeated_numbers(lmao);
}
