#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int anagrams(char arr1[100], char arr2[100]);
int main()
{
    char sentence1[100];
    char sentence2[100];
    printf("Enter two arrays:");
    gets(sentence1);
    gets(sentence2);
    printf("%d", anagrams(sentence1, sentence2));
}
int anagrams(char arr1[100], char arr2[100])
{
    if (strlen(arr1) != strlen(arr2))
        return 0;
    int count1[256] = {0};
    int count2[256] = {0};
    for (int i = 0; arr1[i] && arr2[i]; i++)
    {
        count1[arr1[i]]++;
        count2[arr2[i]]++;
    }
    for (int i = 0; i < 256; i++)
    {
        if (count1[i] == count2[i])
            return 1;
        else
            return 0;
    }
}