#include <stdio.h>
int main()
{
    int low = 0, high = 0, rem = 0, original = 0, num = 0;
    float result=0.0;
    printf("Please write the the two intervals: \n");
    scanf("%d,%d", &low, &high);
    // if (low > high)
    // {
    //     int temp = 0;
    //     temp = low;
    //     low = high;
    //     high = temp;
    // }
    // printf("%d - %d\n", low, high);
    for (original= low; original<high;++original)
    {   
        num = original;
        while (num!=0)
        {

            rem = num % 10;
            result +=(rem * rem * rem);
            num = num / 10;
        }
        if ( (int)result == original)
        {
            printf("%d \n", original);
        }
        result=0;

        
    }
    return 0;
}
