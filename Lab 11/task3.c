/*Write a function that takes two numbers as input and returns their lowest common multiple.
Check if your function works correctly by calling it for some suitable inputs. Show screenshots
of the result you get.*/
#include <stdio.h>
int lcm(int a, int b)
{
    int max;
    max = (a > b) ? a : b;
    while (1)
    {
        if (max % a == 0 && max % b == 0)
        {
            printf("The lcm of the two numbers is %d", max);
            break;
        }

        max++;
    }
}

int main()
{
    int num1, num2;
    printf("Enter the two numbers:");
    scanf("%d,%d", &num1, &num2);
    lcm(num1,num2);
}
