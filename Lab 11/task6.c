/*Write a function that a sentence (saved in a character array) and a character as input. The
function should return the number of times that character occurs in the sentence. Check if
your function works correctly by calling it for some suitable inputs. Show screenshots of the
result you get.*/
#include <stdio.h>
int freq(char sen[], int N, char ch);
int main()
{
    printf("Enter a sentence: ");
    char sentence[255];
    char characters;
    gets(sentence);
    int n = sizeof(sentence) / sizeof(sentence[0]);
    printf("%d", n);
    printf("\nEnter a character:");

    scanf("%c", &characters);

    printf("\nThe times character '%c' is repeated is %d", characters, freq(sentence, n, characters));
    return 0;
}
int freq(char sen[], int N, char ch)
{

    int coun = 0;
    int i;
    for (i = 0; i < N; i++)
    {
        if (sen[i] == ch)
        {
            coun += 1;
        }
    }
    return coun;
}
