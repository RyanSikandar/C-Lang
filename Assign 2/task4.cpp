#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool flag = false;

    printf("Welcome to Ryan's Calculator!! \n");
    printf("Enter '?' to stop entering values. \n");
    while (flag == false)
    {
        float n1, n2;
        float answer;
        char op;
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
            case '+':
                answer = n1 + n2;
                break;
            case '-':
                answer = n1 - n2;
                break;
            case '*':
                answer = n1 * n2;
                break;
            case '/':
                if (n2 == 0)
                {
                    printf("Invalid operation (cannot divide by 0) \n");
                    goto exep;
                }
                answer = n1 / n2;
                break;
            default:
                printf("Invalid operator");
                break;
            }

            n1 = answer;

            printf("Enter operator = ");
            scanf(" %c", &op);
        } while (op != '!');
        printf("\nThe Program has been exited !!\n");
        printf("THe result of the expression is %.4f \n", answer);
        exep:
        int n;

        do
        {
            printf("Do you want to continue entering an expression? For YES press 1 and For NO press 0 = ");
            scanf("%d", &n);
        } 
        while (n != 1 && n != 0);

        if (n == 0)
        {
            flag = true;
        }
    }
    printf("Thank you for using my calculator!!\n!");

    return 0;
}