#include <stdio.h>
int main()
{
    int n1,n2,i,gcd;
    printf("Enter two numbers:");
    scanf("%d,%d",&n1,&n2);
    for (int i=1; i<n1 && i<n2;i++)
    {
        if (n1%i ==0 && n2%i ==0)
        gcd=i;
    }
    printf("%d",gcd);
}
// {
//     int n1, n2;
//     printf("Enter two numbers:");
//     scanf("%d,%d", &n1, &n2);
//     while (n1 != n2)
//     {
//         if (n1 > n2)
//         {
//             n1 -= n2;
//         }
//         else
//         {
//             n2 -= n1;
//         }
//     }
//     printf("%d",n2);
// }