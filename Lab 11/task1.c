/*Write a function that takes a number as input and returns the prime number that is closest to
the input number. Check if your function works correctly by calling it for some suitable inputs.
Show screenshots of the result you get. For example, if the input number is 27, the function
should return 29.*/
#include <stdio.h>
int prime(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            count++;
    }
    if (count == 2)
    {
        return 0;
    }
    else
        return 1;
}

int closestprime(int n)
{
    int num = n;
    int original = n;
    if (prime(n) == 0)
    {
        return n;
    }
    while (prime(n) != 0)
    {
        n--;
    }
    int close1 = 0;
    close1 = n;
    while (prime(num) != 0)
    {
        num++;
    }
    int close2 = 0;
    close2 = num;
    if ((close2 - original) > (original - close1))
    {
        return close1;
    }
    else
        return close2;
}

int main()
{
    printf("Enter a number:");
    int num;
    int closest;
    scanf("%d", &num);
    closest = closestprime(num);
    printf("The prime number closest to the entered number is = %d", closest);
    return 0;
}