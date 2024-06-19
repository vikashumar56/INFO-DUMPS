#include <stdio.h>

void starPattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}
void reverseStarPattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= rows - i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}
int main()
{
    int rows, type;
    printf("Enter 0 for star Pattern and 1 for Reverse star Pattern \n");
    scanf("%d", &type);
    printf("How many rows you want\n");
    scanf("%d", &rows);
    switch (type)
    {
    case 0:
        starPattern(rows);

        break;
    case 1:
        reverseStarPattern(rows);

        break;

    default:
        printf("You have entered an invalid choise ");
        break;
    }

    return 0;
}
