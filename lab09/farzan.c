#include <stdio.h>

int main()
{
    //this 
    printf("Use ',' as the separator to separate the char and the frequency\nTo exit the program, press Enter key then forward slash\n"); 
    char arr[1000];
    int j = 0;
    int count; 
    while(1){
        char ch;
        int freq;
        scanf("%c,%d,", &ch, &freq); 
        
        if(ch == '/')
        {
            break;
        }
        
        else

        {
            for (int i = 0; i < freq; i++,j++)
            {
                arr[j] = ch; 
            }
        }

        count = j;

    }
    for (int i = 0; i < count;i++)
    {
        printf("%c", arr[i]); 
    }
return 0;
}