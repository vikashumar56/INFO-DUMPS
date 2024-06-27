#include <stdio.h>
int main()
{
    int a, b, x, m, n;
    a = 10, b = 15;
    x = (a > b) ? a : b;
    printf("%d", x);
    // sizeof() is used to return the number of bytes it occupies
    m = sizeof(int), n = sizeof(long int);
    printf("%d %d", m, n);
    return 0;
}

// Sum of 1/n terms
int main()
{
    float sum, term, n;
    int count = 1;
    sum = 0;
    printf("Enter the no. of numbers you want to add\t");
    scanf("%f", &n);
    term = 1.0 / n;
    while (count <= n)
    {
        sum = sum + term;
        count++;
    }
    printf("Sum of 1/nth no are %f", sum);
    return 0;
}

int main()
{
    int n, i;
    float sum;
    printf("Enter th no. of numbers");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + 1 / (float)n;
        printf("%5d %5.2f \n", i, sum);
    }
    return 0;
}
