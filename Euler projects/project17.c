// If the numbers 1 to 5 are written out in words: one, two, three, four, five, then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.
// If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, how many letters would be used?
#include <stdio.h>
int main()
{
    int set1[] = {3, 3, 5, 4, 4, 3, 5, 5, 4};          // 1-9
    int set2[] = {3, 6, 6, 6, 5, 5, 6, 6, 6};          // 10 multiples
    int set3[] = {6, 6, 8, 8, 7, 7, 8, 7};             // 11-19
    int set4[] = {10, 10, 12, 11, 11, 10, 12, 12, 11}; // 100 multiples
    int sum = 0;
    int n = 0;
    const int AND = 3;

    for (int i = 0; i < 9; i++) // for 1-9
    {
        sum += set1[i];
        n++;
    }
    printf("%d\n", n);
    sum += 3;
    n++;

    for (int i = 0; i < 9; i++)
    {
        sum += set3[i];
        n++;
    }
    printf("%d\n", n);

    for (int i = 0; i < 8; i++)
    {
        sum += set2[i];
        n++;
        for (int j = 0; j < 9; j++)
        {
            sum += set1[j];
            n++;
        }
    }
    printf("%d\n", n);

    n++;
    sum += set4[0];
    printf("%d\n", n);

    for (int i = 0; i < 9; i++)
    {
        sum += set1[i];
        n++;
    }
    printf("%d\n", n);
    n += 1;
    sum += 3;
    sum += AND;

    for (int i = 0; i < 9; i++)
    {
        sum = set3[i] + AND;
        n++;
    }
    n++;
    sum = AND + set2[1];
    printf("%d\n", n);

    for (int i = 2; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            sum = AND;
        }
    }
}
