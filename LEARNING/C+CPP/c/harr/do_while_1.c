#include <stdio.h>

int main()
{
    int num, i = 0;
    printf("Enter a num");
    scanf("%d", &num);

    do
    {
        printf("%d\n", i + 1);
        i = i + 1;
    } while (i < num);

    return 0;
}
