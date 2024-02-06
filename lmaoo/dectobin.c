#include <stdio.h>
int main()
{
    int dec,bin=0,rem=0,i=1;
    printf("Enter a number:");
    scanf("%d",&dec);
    while(dec)
    {
        rem= dec%2;
        dec/=2;
        bin= bin + rem*i;
        i*=10;
       
    }
 printf("%d",bin);}