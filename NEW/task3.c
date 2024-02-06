#include<stdio.h>
int main()
{
    char a;
    printf("Enter an alphabet:");
    scanf("%a",&a);
    switch (a)
    {
        case 'b':case 'a': case 'c': case 'e': case 'd': case 'f': case 'g': case 'h': case 'i': case 'j':case 'k':case 'l': case 'm': case 'n': case 'o': case 'p': case 'q': case 'r': case 's': case 't':case 'u':case 'v': case 'w': case 'x': case 'y': case 'z': 
        printf("%c is lower case",a);   
        break;
        default:
        printf("%c is upper case",a);
        return 0;
    
    }
    
}