#include <stdio.h>
int main()
{
    int num,a=0,b=1,next_num=0;
    printf("Enter the number of terms:");
    scanf("%d",&num);
    next_num=a+b;
    printf("The first two Fabionacci numbers are: %d,%d",a,b);
    for (int n=3;n<=num;n++)
    {
        printf(",%d",next_num);
        a=b;
        b=next_num;
        next_num=a+b;
    }
}