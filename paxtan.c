// #include <stdio.h>
// int main()
//  {   
//     char name[] ="bro";
//     char lmao='V';
//     float gpa=3.96;
//     float cgpa=4.00;
//     float item1= 6.54;
    
//     printf("%-5.2f\n",gpa);
//     printf("%5.2f\n",cgpa);
//     printf("%5.2f\n",item1);
//     printf("%c\n",lmao);
//     printf("%s",name);
//     return 0;
//  }
#include <stdio.h>
#include <string.h>

int main()
{
    char test[100];
    printf("Enter the string input:");
    gets(test);
    int size = strlen(test);
    printf("%d\n", size);
	char encrypt[27];

    char arr[26] = { 'A', 'B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
    int new_index;
    for (int i = 0; i < 27; i++)
    {
        for (int n = 0; n < size; n++)
        {

            if (test[n] == ' ')
            {
                continue;
            }
                if (arr[i] == test[n])
                {
                    if (n < 7)
                    {
                    new_index = n + 19;
                    }
                    else
                    {
                    int new_index = i - 7;
                    }
                encrypt[n] = arr[new_index];
                }
        }

    }
    printf("%s", encrypt);
}

