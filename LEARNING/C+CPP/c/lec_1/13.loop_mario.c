// #include<stdio.h>

//  /*to print in horizontal*/

// int main(void)
// {
//    for(int i=0; i<4; i++)
//    {
//     printf("?");
//    }
//    printf("\n");
// }

// /*now lets print a full block*/

// /* almost the same but this time we will ask the user about the value of n*/

//    int n  = get_int("Size: ");
//    /*here the "get_int" function only asks once and prints the n value answer but only if its zero or greater*/

//    while(n<1)
//    {
//     n=get_int("Size: ");
//    }
//    /*now this fuction repeatedly asks the user unless n until it inputs a value that is greater than 0*/
//  // or
//    int n=4;
//    for (int i=0; i<n; i++)
//    {
//     for (int j=0; j<n; j++)
//     {
//         printf("#");
//     }
//     printf("\n");
//    }

// //this can be refactored more by introducing "do_while loop"
#include<cs50.h>
#include<stdio.h>
int main(void)
{
int n;
//prompt user for positive integer
do
{
    n = get_int("Size: ");
}
while (n<1);

// print an n-by-n grid for bricks

for (int i=0; i<n; i++)
{
    for (int j=0; j<n; j++)
    {
        printf("#");
    }
    printf("\n");
}
}
