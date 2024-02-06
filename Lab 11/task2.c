/*Write a function that takes two numbers as input and checks whether one of the numbers is
a multiple of the other number or not. The function returns true if they are a multiple and
returns false if they are not. Check if your function works correctly by calling it for some
suitable inputs. Show screenshots of the result you get.*/
#include <stdio.h>
int multiple(int n1, int n2)
{
    int temp;
    if (n2 > n1)
    {
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    if (n1 % n2 == 0)
        printf("The number %d is the multiple of %d", n2, n1);
    else 
    printf("The number %d is not the multiple of %d", n2, n1);
}
int main()
{
    int n1;
    int n2;
    printf("Enter two numbers:");
    scanf("%d,%d", &n1, &n2);
    multiple(n1, n2);
}