#include <stdio.h>
int main()
{
    int n,num, remainder, result = 0;
    printf("Enter a number:");
    scanf("%d", &num);
    n=num;
    do
    {
        remainder = num % 10;
        result = result * 10 + remainder;
        num = num / 10;
    }
     while (num != 0);
    if (result==n)
    {
        printf("The number you entered is a palindrome number.");
    }
    else 
    printf("The number is not palindrome");
}