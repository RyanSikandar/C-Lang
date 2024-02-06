#include <stdio.h>
int main()
{
    int a,b,q,r;
    printf("Enter a dividend: ");
    scanf("%d",&a);
    printf("Enter a divisor: ");
    scanf("%d",&b);
    q= a/b;
    r=a%b;
    printf("The remiander is %d",r);
    printf("The quotient is %d",q);


}