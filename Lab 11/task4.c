/*Write a function that takes two character arrays as input and finds the common characters
between the two arrays. Check if your function works correctly by calling it for some suitable
inputs. Show screenshots of the result you get.*/
#include <stdio.h>
#include <string.h>
void common(char arr1[], char arr2[])
{
    printf("The common characters are:\n");
    for (int i = 0; i < strlen(arr1); i++)
    {
        for (int j = 0; j < strlen(arr2); j++)
        {
            if (arr1[i] == arr2[j])
            {
                printf("%c ", arr1[i]);
            }
        }
    }
}
int main()
{
    char ar1[100];
    char ar2[100];
    printf("Enter the characters in first array:\nPress Enter to end\n");
    gets(ar1);
    printf("Enter the characters in second array:\nPress Enter to end\n");
    gets(ar2);
    common(ar1, ar2);
}