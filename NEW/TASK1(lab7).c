#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d,%d",&a,&b);
    a>b? printf("%d is the greater number and %d is the smaller number",a,b) : printf("%d is the greater number and %d is the smalller number",b,a);
    return 0;
}