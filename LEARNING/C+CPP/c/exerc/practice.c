#include<stdio.h>
#include<string.h>

int main()
{
    int rows,k;
    printf("enter the number of rows \t ");
    scanf("%d",&rows);
    for (int i = 1; i <= rows;++i,k=0)
    {
        for (int space = 1; space <= rows-i; ++space)
        {
            printf(" ");
        }
        while (k!=2*i-1)
        {
            printf("*");
            ++k;
        }
        printf("\n");
    }

    return 0;
}
