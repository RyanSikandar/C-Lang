#include<stdio.h>
int main()
{
    int a;
    
    printf("Enter the month number:");
    scanf("%d",&a);
    switch (a)
    {
        case 1:case 3: case 5: case 7: case 8: case 10: case 12:
        printf("The month has 31 days");
        break;
        case 2:
        printf("The month has 28 days (considering a non leap year)\nFor leap year it has 29 days");
        break;
        default:
        printf("The month has 30 days");
    }

}