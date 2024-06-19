#include<stdio.h>
int main()
{
    int a;
    printf("Entre the number to check");
    scanf("%d",&a);
    check(a);
    return 0;
}
void check(int x)
{
    if (x%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}

