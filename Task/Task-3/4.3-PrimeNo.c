/*
Find the prime no of two intervals
*/
#include <stdio.h>

int main() 
{
   int a, b, i, j;

   printf("Enter two numbers (intervals)");
   scanf("%d %d", &a, &b);

   printf("Prime numbers of %d and %d  are: ", a, b);


   while (a < b)
    {
      j = 0;

      if (a <= 1) 
      {
         ++a;
         continue;
      }
 
      for (i = 2; i <= a / 2; ++i)
      {

         if (a % i == 0)
         {
            j = 1;
            break;
         }
      }

      if (j == 0)

      printf("%d ", a);

      ++a;
   }

   return 0;
}
