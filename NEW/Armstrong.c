#include <stdio.h>
int main()
{
    int num,remainder=0,result=0;
    printf("Enter a three digit number:");
    scanf("%d",&num);
    while (num!=0)
    {
        remainder= num%10;
        result += remainder*remainder*remainder;
        num=num/10;
    }
    printf("%d",result);
}