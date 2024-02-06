#include <stdio.h>

// Lab Task 10
// Task2

int main()
{

  int inp[10], i, k, change;
  printf("Please input 10 numbers:\n");
  for (i = 0; i < 10; i++)
  {
    scanf("%d", &inp[i]);
  }
  for (i = 0; i < 9; i++)
  {
    for (k = 0; k < 9 - i; k++)
    {
      if (inp[k] > inp[k + 1]) /* For decreasing order use '<' instead of '>' */
      {
        change = inp[k];
        inp[k] = inp[k + 1];
        inp[k + 1] = change;
      }
    }
  }

  printf("\nThe Second largest number in the sequence is: %d", inp[8]);
  printf("\n The second smallest number in the sequence is: %d\n", inp[1]);
  return 0;
}
