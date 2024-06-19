#include<stdio.h>
#define pi 3.14
int main()
{
    float area;
    int r;
    printf("Enter radius of circle: ");
    scanf("%d",&r);
    area = pi*r*r;
    printf("Area of circle is %.2f\n", area);
}
