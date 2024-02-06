#include <stdio.h>
int main()
{
    char op;
    float n1, n2;

    printf("Enter operator either + or - or * or /: ");
    scanf("%c", &op);

    printf("Enter two operands: ");
    scanf("%f,%f", &n1, &n2);

    switch (op)
    {
        case '+':
            printf("%.1f + %.1f = %.1f", n1, n2, n1+n2);
            break;

        case '-':
            printf("%.1f - %.1f = %.1f", n1, n2, n1-n2);
            break;

        case '*':
            printf("%.1f * %.1f = %.1f", n1, n2, n1*n2);
            break;

        case '/':
            printf("%.1f / %.1f = %.1f", n1, n2, n1/n2);
            break;
        default:
        printf("Invalid operator !!");
    }
    return 0;
}