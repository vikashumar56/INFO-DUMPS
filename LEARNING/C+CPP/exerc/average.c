#include <stdio.h>
#define n 10
int main()
{
    int i;
    float avg, sum, num;
    sum = 0;
    printf("Enter a no \t");
    scanf("%f", &num);
    for (i = 0; i <= n; i++)
    {
        sum = sum + num;
    }
    avg = sum / n;
    printf("sum = %.2f ", sum);
    printf(" average = %.2f ", avg);
    return 0;
}
