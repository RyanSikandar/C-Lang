#include <stdio.h>
int main()
{
    FILE *f1;
    f1 = fopen("prj9.c", "r");
    if (f1 == NULL)
        printf("Error");
    char content[100];
    fgets(content, 100, f1);
    while (!feof(f1))
        printf("%s", content);
    while (!feof(fp)) // Copies information from candidate file to temporary file.
    {
        fscanf(fp, "%s", line);
        fprintf(fcp, "%s\n", line);
    }
}