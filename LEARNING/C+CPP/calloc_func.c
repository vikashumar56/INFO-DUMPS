#include<stdio.h>
#include<stdlib.h>

int main()
(
    int *freq,*num,size,i;
    printf("Enter the size of list:\t");
    scanf("%d",&size);
    num=(int*)malloc(size*sizeof(int));
    printf("\n Enter the number:");
    for ( i = 0; i < size; i++)
    {
        printf("\n Enter the number:");
        scanf("%d",&num[i]);
        if (num[i]<0 || num[i]>4)
        {
            printf("\n Enter the number between 0-4");
            i--;
            continue;
        }
    }
    freq=(int*)calloc(5,sizeof(int));
    for ( i = 0; i <= size; i++)
    {
        freq[num[i]]++;
    }
    printf("\n Th frequency of the number are:");
    for ( i = 0; i < 5; i++)
    {
        printf("freq[%d] = %d",i,freq[i]);
    }
      return 0;
)
