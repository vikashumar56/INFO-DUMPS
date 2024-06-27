#include<stdio.h>

int main()
{
    int num ;
    printf("ENTER THE VALUE OF WHICH YOU WANT THE TABKE OF :");
    scanf("%d", &num);
    printf("THE TABLE OF THE NUM  IS :");
    for (int i = 1; i <= 10; i++)
    {
        printf("\n %d *  %d  =  %d", num ,i, num*i);
    }
    return 0 ;
}
