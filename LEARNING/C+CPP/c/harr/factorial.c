#include <stdio.h>
int factorial (int number)
{
    if (number == 1 || number == 0)
    {
        return 1 ;
    }
    else
    {
        return (number * factorial(number - 1 ));
    }
}
    int main()
    {
        int num ;
        printf("ENTER THE NUM YOU WANT FACTORIAL OF : ");
        scanf("%d", &num);
        printf("THE FACTORIAL OF NUM %d is %d ", num , factorial(num));
        return 0 ;
    }



