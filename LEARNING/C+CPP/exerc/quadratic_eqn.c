#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    float root1, root2, disrciminated;
    printf("Enter the value of a,b,c \t");
    scanf("%d %d %d", &a, &b, &c);
    disrciminated = b * b - 4 * a * c;
    if (disrciminated < 0)
    {
        printf("Roots are imaginary");
    }
    else
    {
        root1 = (-b + sqrt(disrciminated)) / (2 * a);
        root2 = (-b - sqrt(disrciminated)) / (2 * a);
        printf("Root1=%7.3f \n  Root2=%7.3f", root1, root2);
    }
    return 0;
}
