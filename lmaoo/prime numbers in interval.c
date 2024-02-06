#include <stdio.h>
int main()
{
    int low, high, flag;
    printf("Enter the interval (lower number first):");
    scanf("%d,%d",&low,&high);
    while (low < high) // we start from lower interval and go to high interval
    {
        flag = 0;
        if (low <= 1) // ignoring numbers less than 1
        {
            ++low;
            continue;
        }
        for (int i = 2; i <= low / 2; i++)
        {
            if (low % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d ", low);
        }
        low++;
    }
    return 0;
}