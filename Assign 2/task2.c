#include <stdio.h>
int main()
{
    int num, exp, choice;
    float a, b;
    char operator;
    float pow, f,result=0;
    char op;
    printf("Welcome to Rayan's Calculator!!\n");
    printf("-For arithmetic operations please press 1\n-for Cube root, square root and power functions press any other number:\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
    {
        printf("Enter an operator (+, -, *, /):");
        scanf(" %c", &operator);
        printf("Enter two numbers for operation:");
        scanf("%f,%f", &a, &b);
        switch (operator)
        {
        case '*':
            result = a * b;
            printf("%.2f", result);
            break;
        case '/':
            result = a / b;
            printf("%.2f", result);
            break;
        case '-':
            result = a - b;
            printf("%.2f", result);
            break;
        case '+':
            result = a + b;
            printf("%.2f", result);
            break;
        default:
            printf("The operator you entered is invalid");
        }
    }
    break;
    default:
    {

        printf("-For square root press 1\n-For cube root press 2\n-For power function press 3\n-For no operation at all press any other key\n \nEnter the operation you want to perform:");
        scanf(" %c", &op);
        switch (op)
        {
        case '1':
        {

            printf("Enter a number:");
            scanf("%d", &num);
            if (num >= 0)
            {
                for (f = 0; f * f <= num;)
                {
                    f += 0.001;
                }
                printf("%.2f", f);
            }
            else
            {
                printf("Square root is undefined.");
            }
        }
        break;
        case '2':
        {

            printf("Enter a number:");
            scanf("%d", &num);
            if (num < 0)
            {
                num *= -1;
                for (f = 0; f * f * f <= num;)
                {
                    f += 0.001;
                }
                printf("-%.2f", f);
            }
            else
            {
                num *= -1;
                for (f = 0; f * f * f <= num;)
                {
                    f += 0.001;
                }
                printf("-%.2f", f);
            }
        }
        break;
        case '3':
        {
            float pow = 1.0;
            printf("Enter a number:");
            scanf("%d", &num);
            printf("Enter the exponent:");
            scanf("%d", &exp);
            while (exp != 0)
            {

                pow *= num;
                exp--;
            }

            printf("%.0f", pow);
          
        }
        break;
        default:
        {
            printf("The program is exited");
        }
        }
    }

}
return 0;
}