#include<stdio.h>
int main()
{

    int num, remainder, result = 0;
    printf("Enter a number:");
    scanf("%d", &num);
    while (num != 0)
    {
        remainder = num % 10;
        result = result * 10 + remainder;
        num = num / 10;
    }
     printf("%d is the reversed number",result);
     return 0;
}