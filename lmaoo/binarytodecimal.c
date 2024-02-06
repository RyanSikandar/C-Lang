#include <stdio.h>
int main()
{
    // int binary,rem=0,base=1,dec=0;
    // printf("Enter a binary number:");
    // scanf("%d",&binary);
    // while (binary)
    // {
    //     rem=binary%10;
    //     dec= dec + rem*base;
    //     binary/=10;
    //     base*=2;
    // }
    // printf("%d",dec);
    int binary, rem = 0, base = 1, dec = 0;
    printf("Enter a binary number:");
    scanf("%d", binary);
    while (binary)
    {
        rem = binary % 10;
        dec = dec + rem * base;
        binary /= 10;
        base *= 2;
    }
}