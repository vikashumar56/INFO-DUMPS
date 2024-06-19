#include<stdio.h>
#define val 1,\
            2,\
            3
int main()
{
    int a[3] = {val},i;
    for (i=0; i<3; i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
}
