#include <stdio.h>
int main()

{
    int age;
    printf("enter your age ");
    scanf("%d", &age);
    switch (age)
    {
    case 6:
        printf("The age is 6");
        break;
    case 9:
        printf("The age is 9");
        break;
    case 69:
        printf("The age is 69 ;)");
        break;
    default:
        printf("The age is not 6,9 or 69 :(");
        break;
    }

    return 0;
}
