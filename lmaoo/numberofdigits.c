#include <stdio.h>
int numofdigits(int n);
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    int y = numofdigits(n);
    printf("%d", y);
}
int numofdigits(int n)
{
    static int ctr = 0;
    if (n == 0)
        return ctr;
    else
    {
        ctr++;
        numofdigits(n / 10);
    }
}