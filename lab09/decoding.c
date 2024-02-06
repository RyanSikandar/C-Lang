#include<stdio.h>
#include <string.h>
int main()
{
    char arr[100000];
    int j=0,length=0,k=1;
    printf("Enter the string you want to decode\n*(Format:characterfrequency)*\nFor Example: a5h6\n");
    gets(arr);
    while(arr[k]!='\0')
    {
        length=arr[k]-'0';
        for(int i=1;i<=length;i++)
        {
            printf("%c",arr[j]);
        }
        j+=2;
        k+=2;
        length=0;
    }
} 