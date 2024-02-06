#include <stdio.h>
int main ()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n==0)
    {
        printf("Number is zero");
    }
    else
    {
    n>0?printf("%d is positive number",n):printf("%d is a negative number",n);
    }
    return 0;
}