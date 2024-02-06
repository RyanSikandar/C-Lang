#include <stdio.h>
int main()
{
    int a,b,c,root2,rpart,imgpart;
    float num=0,n,sqroot=0,root1;
    printf("Enter the a,b,c part of the quadratic equation.");
    scanf("%d,%d,%d",&a,&b,&c);
    num= (b*b)-(4*a*c);

    for (n=0;n*n<=num;)
    {
        n+=0.001;
    }
    sqroot=n;
    printf("%f",sqroot);
    if(num>0)
    {
        root1= (-b+sqroot)/ 2*a ;
        printf("The root of the equations are %f",root1);
    }

}