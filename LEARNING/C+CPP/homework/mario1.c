#include<stdio.h>
#include<cs50.h>
 int main(void)
 {
    int x;
    do
    {
    x = get_int("Block needed for left triangle: ");
    }
    while (x<1);

//     for (int i=1; i<=x; i++)
//     {
//      for (int j=0; j<i; j++)
//       {
//        printf("#");
//       }
//       printf("\n");
//     }
//  }

//another way is to print using "spaces"

for (int i=0; i<x; i++)
{
   printf("#");
   for (int j=x; j>i; j--)
   {
      printf(" ");
   }
   printf("\n");
}

}


int main(void)
{
    int x;
    do
    {
        x = get_int("Block needed for left downside triangle: ");
    }
    while (x<1);

    for (int i=0; i<x; i++)
    {
     printf(" ");
     for (int j=x; j>i; j--)
     {
        printf("#");
     }
    printf("\n");
    }
}

