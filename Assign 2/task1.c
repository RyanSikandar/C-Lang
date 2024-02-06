#include <stdio.h>
int main()
{
    int a, b, result = 0;
    char operator;
    printf("Welcome to your Calculator.\n");
    printf("Enter an operator (+, -, *, /):");
    scanf("%c", &operator);
    printf("Enter two numbers for operation:");
    scanf("%d,%d",&a,&b);
    switch (operator)
    {
        case '*':
        result = a*b;
        printf("%d",result);
        break;
        case '/':
        result = a/b;
        printf("%d",result);
        break;
        case '-':
        result = a-b;
        printf("%d",result);
        break;
        case '+':
        result = a+b;
        printf("%d",result);
        break;
        default:
        printf("The operator you entered is invalid");
    }
    return 0;
}