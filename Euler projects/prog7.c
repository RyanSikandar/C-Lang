#include <stdio.h>
int main()
{
    int count = 0, count_1 = 0, num = 0;
    for (int i = 1;; i++)
    {
        for (int j = 1;; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
            if (count == 2)
            {
                count_1++;
            }
            if (count_1 == 6)
            {
                num = i;
                printf("%d",num);
                break;
            }
        }
    }
    printf("%d", num);
}