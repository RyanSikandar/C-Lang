int check_prime(int num)
{
     int factor = 0;
     for (int i = 1; i <= num; i++)
     {
          if (num % i == 0)
               factor++;
     }
     if (factor == 2)
          return 1;
     else
          return 0;
}
void main()
{
     int a, counter = 0, num = 0;
     int n=10001;
     while (1)
     {
          if (check_prime(a))
               counter++;
          if (counter == n)
          {
               num = a;
               break;
          }
          a++;
     }
     printf("%d", num);
}
