#include <stdio.h>
int main()
{

    FILE *pF = fopen("C:\\Users\\DELL\\Desktop\\lmao.txt", "r");
    char buffer[255];
    while (fgets(buffer, 255, pF) != NULL)
    {
        printf("%s", buffer);
    }
    fclose(pF);
    return 0;
}