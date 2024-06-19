#include <stdio.h>

/* To evaluate the power series */
/* #define ACCURACY 0.0001
int main()
{
    int n, count;
    float x, term, sum;
    printf("Enter value of x \t");
    scanf("%f", &x);
    n = sum = term = count = 1;
    while (n <= 100)
    {
        term = term * x / n;
        sum = sum + term;
        count = count + 1;
        if (term < ACCURACY)
            n = 999; // It is used to terminate while loop .. as n can be 100
        else
            n = n + 1;
    }
    printf("Term=%d \t Sum=%f", count, sum);
    return 0;
}  */

/* To find greatest among numbers */
int main(){
    int a,b,c;
    printf("Enter the values of a , b and c \t ");
    scanf("%d %d %d",&a,&b,&c);
     if(a>b && a>c)
     printf("A is gratest");
     else if(b>a && b>c)
      printf("B is gratest");
      else
       printf("C is gratest");
       return 0;
}
