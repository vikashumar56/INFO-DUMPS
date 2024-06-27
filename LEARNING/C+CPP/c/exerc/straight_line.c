#include <stdio.h>
int main()

{
    /* To check the three points fall on straight line */
    int x1, x2, y1, y2, x3, y3;
    float strt;
    printf("Enter the value of x1 x2 and x3 \t ");
    scanf("%d %d %d", &x1, &x2, &x3);
    printf("Enter the value of y1 y2 and y3 \t ");
    scanf("%d %d %d", &y1, &y2, &y3);

        strt = x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2);

    if (strt == 0)
    {
        printf("All points fall on straight line");
    }
    else
        printf("The entered no doesn't fall on staright line");

            return 0;
}
