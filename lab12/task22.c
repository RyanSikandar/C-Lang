#include <stdio.h>
#include <string.h>
float sum(int arr[],int i,int size);
int main()
{
    int num[]={1,2,3,4};
    float x =sum(num,0,4);
    printf("The average of the numbers is: %.2f",(x/4));
}
float sum(int arr[],int i,int size)
{
    if (i == (size-1))
    {
        return arr[i];
    }
    else
        return (arr[i] + sum(arr,i+1,size));
}