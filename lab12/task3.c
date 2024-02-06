#include <stdio.h>
int fabionacci(int);
int main()
{
    int num;
    int sum = 0;
    printf("Enter the nth term for which you want to calculate the fabionacci series: ");
    scanf("%d", &num);
    fabionacci(num);
    printf("The sum till %d fabionacci series is:%d", num, fabionacci(num));
}
int fabionacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return (fabionacci(n - 1) + fabionacci(n - 2));
}