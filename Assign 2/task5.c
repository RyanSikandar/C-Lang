#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main()
{
    int num, exp, choice, func, n;
    bool flag = true;
    float a, b, radian = 0;
    char operator;
    float f, result = 0;
    char op;
    printf("Welcome to Rayan's Calculator!!\n");
    printf("-For arithmetic operations please press 1\n-For trigonometric functions press 2\n-for Cube root, square root and power functions press any other number:\n");
    scanf("%d", &choice);
    while (flag !=false)
    {
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
        case 2:
        {
            printf("Enter the angle in degree you want to calculate the trignometric function of:\n");
            scanf("%d", &num);
            radian = num / 180;
            printf("-For Sin function press 1.\n-For Cosine function press 2.\n-For Tangent function press 3.\n");
            scanf("%d", &func);
            if (func == 1)
            {
                printf("\nThe sin of the number is:%.2f", sin(radian));
            }
            else if (func == 2)
            {
                printf("The cosine function of the number is %.2f", cos(radian));
            }
            else
            {
                printf("The tangent function of the number is %.2f", tan(radian));
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
        printf("\nDo you want to perform the operations again?\nTo exit press 1\n");
        scanf("%d", &n);
        if (n == 1)
        {
            flag = false;
        }
    }
    return 0;
}