#include <stdio.h>
#include <conio.h>
int main()
{
   // for formation of pyramid pattern using rows and columns
   int i, j, n;
   printf("Enter the no.");
   scanf("%d", &n);
   for (i = 1; i <= n; i++)
   {
      for (j = 1; j <= 2 * n - 1; j++)
      {
         if (j >= n - (i - 1) && j <= n + (i - 1))
         {
            printf("*");
         }
         else
            printf(" ");
      }
      printf("\n");
   }
   return 0;
}

int main()
{
   /* FIBONNIC series */
   int num1 = 0, num2 = 1, i, fib, n;
   printf("Enter a no \t ");
   scanf("%d", &n);
   printf("the fobannic series of first %d are \n", n);
   printf("%d %5d \t",num1,num2);
   for (i = 2; i < n; i++)
   {
      fib = num1 + num2;
      num1 = num2;
      num2 = fib;
      printf("%d \t", fib);
   }
   return 0;
}

