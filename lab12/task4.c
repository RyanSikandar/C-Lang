#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = 6;
    int x = prod(arr,0,size);
    printf("%d", x);
}
int prod(int arr[],int i,int size)
{
    if (i == (size-1))
    {
        return arr[i];
    }
    else
        return (arr[i] * prod(arr,i+1,size));
}