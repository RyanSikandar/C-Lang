#include <stdio.h>
#include <stdbool.h>

int main()
{

    printf("Welcome to Ryan's Calculator!! \n");

    printf("Enter '?' to stop entering values. \n");

    float answer;
    char op;
    float n1, n2;
    printf("Enter number = ");
    scanf("%f", &n1);
    printf("Enter operator = ");
    scanf(" %c", &op);
    while (op != '+' && op != '*' && op != '-' && op != '/')
    {
        printf("The operator you entered was invalid, please enter a valid operator:\n ");
        scanf(" %c", &op);
    }

    do
    {
        printf("Enter number = ");
        scanf("%f", &n2);

        switch (op)
        {
        case '/':
            if (n2 == 0)
            {
                printf("Invalid operation (cannot divide by 0) \n");
                goto exep;
            }
            answer = n1 / n2;
            break;
        case '-':
            answer = n1 - n2;
            break;
        case '+':
            answer = n1 + n2;
            break;
        case '*':
            answer = n1 * n2;
            break;
        default:
            printf("Invalid operator");
            break;
        }

        n1 = answer;

        printf("Enter operator = ");
        scanf(" %c", &op);
    } while (op != '?');
    printf("\nThe Program has been exited !!\n");
    printf("The Result of the expression is %.4f \nGoodbye!", answer);

    exep:

    printf("Thank you for using my calculator!!\n!");

    return 0;
}
