#include <stdio.h>
#include <string.h>
int main()
{
    char arr[100000];
    int i = 0;
    int count = 1;
    printf("Enter the string you want to encode:");
    gets(arr);
    while ((int)arr[i] != 0)
        i++;
    int length;
    length = i;
    printf("%d\n", length);
    for (int j = 0; j < length; j++)
    {
        if (arr[j] == arr[j + 1])
        {
            count++;
        }
        else
        {
            printf("%c%d", arr[j], count);
            count = 1;
        }
    }
    
}