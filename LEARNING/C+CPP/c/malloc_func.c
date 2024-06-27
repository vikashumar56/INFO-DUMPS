#include<stdio.h>
#include<stdlib.h>
#define NULL 0

int main()
{
    int *p, *table;
    int size;
    printf("Enter the size of table?");
    scanf("%d",&size);
    printf("\n");
    /*------MEmory Allocation-------*/
    table=(int*)malloc(size*sizeof(int));
    if (table == NULL)
    {
        printf("NO space available");
        exit(1);
    }
    /*--Reading Table values--*/
    printf("ENter the table inputs:\t");
    for ( p = table; p < table + size  ; p++)
    {
        scanf("%d",p);
    }
    /*---Printing table in reverse order---*/
    for ( p = table + size -1; p >=table; p--)
    {
        printf("\n %d is stored at address %u",*p,p);
    }
    return 0;
}
