#include <stdio.h>
int main()
{
    char c;
    int lcase,ucase=0;
    printf("Enter a character:");
    scanf("%c",&c);
    lcase= c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
    if (lcase=1)
    printf("The vowel is detected");
    else 
    printf("There is a consonant");
}