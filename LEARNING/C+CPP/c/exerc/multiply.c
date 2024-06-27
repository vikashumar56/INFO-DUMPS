#include <stdio.h>
#include <math.h>
int main()
{
   // MULTIPLICATION PROGRAMME
   int i, n, m;
   printf("enter a no \t ");
   scanf("%d", &m);
   printf("The multipliaction table of %d is as under", m);
   for (i = 1; i <= 10; i++)
   {
      n = m * i;
      printf("\n %d    x%5d   =%5d", m, i, n);
   }
   return 0;
}
