#include<stdio.h>
int main()
{
    int a ;
    printf ("ENTER THE NUM YOU WANT TO CHECK \t");
    scanf("%d", &a);
    if (a%2 == 0)
    {
        printf("THE NUM IS EVEN");
    }
    else
    {
        printf("THE NUM IS ODD");
    }
    return 0;

}
