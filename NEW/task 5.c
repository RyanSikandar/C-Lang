#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    switch (n)
    { case 0:
        printf("Number is zero");
        break;
      default:
      switch (n>0)
    {
        case 1:
        printf("%d is positive",n);
        break;
        case 0:
        printf("Number is negative",n);
        break;
    }
    }
    
}