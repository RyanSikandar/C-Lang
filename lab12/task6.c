#include <stdio.h>
#include <stdlib.h>

void toh(int n, char fromrod, char torod,char auxrod)
{
    if (n == 0)
    {
        return;
    }
    toh(n - 1, fromrod, auxrod, torod);
    printf("Move disk %d from rod %c to rod %c\n", n, fromrod, torod);
    toh(n - 1, auxrod, torod, fromrod);
}
int main()
{
    int N = 3;
    // A, B and C are names of rods
    toh(N, 'A', 'C', 'B');
    return 0;
}
