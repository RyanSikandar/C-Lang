#include <stdio.h>
#include <stdbool.h>

int main()
{
    int arr[12] = {1};
    int new_arr[12] = {0};

    for (int i = 0; i < 12; i++)
    {
        scanf("%d", &arr[i]);
    }
    int index = 0;
    for (int i = 0; i < 12; i++)
    {
        bool flag = true;
        for (int j = 0; j < 15; j++)
        {
            if (arr[i] != new_arr[j])
            {
                continue;
            }
            else
            {
                flag = false;
                break;
            }
        }
        if (flag == false)
        {
            continue;
        }
        else
        {
            new_arr[index] = arr[i];
            index++;
        }
    }

    for (int i = 0; i < index; i++)
    {
        printf("%d\t", new_arr[i]);
    }
    return 0;
}
