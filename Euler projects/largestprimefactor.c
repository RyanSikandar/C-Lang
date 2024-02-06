#include <stdio.h>
int prime_num(int num);
int main()
{
     int a;
     int count = 0;
     int prime = 0;
     int MAX_SIZE = 10000000;
     printf("Enter the prime number that is to be calculated:");
     scanf("%d", &a);
     for (int i = 2; i < MAX_SIZE; i++)
     {
          if (prime_num(i) == 0)
          {
               count++;
          }
          if (count == a)
          {
               prime = i;
               break;
          }
     }
     printf("%d", prime);
}
int prime_num(int num)
{
     int flag = 0; // for prime numbers
     for (int i = 2; i <= num / 2; i++)
     {
          if (num % i == 0)
          {
               flag = 1;
               break;
          }
     }
     return flag;
}