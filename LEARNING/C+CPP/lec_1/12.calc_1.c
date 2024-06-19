#include<cs50.h>
#include<stdio.h>

int main(void)
{
    /* now this is a simple addition it will take two varaibles from the user and then  add those two display it */

    int x = get_int("x: ");
    int y = get_int("y: ");

    printf("%i\n", x+y);
}

/* another way to do is*/

int add(int a, int b); /*just a prototype so that the compiler does not get flustered afterwards on why was it randomly introduced */

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");

  /*here the value that returns from the add function is then alloted to the z variable but it does not tell how to add. */

    int z = add(x,y);

    printf("%i", z);
}

// this the working of the add function on how will it add

int add(int a, int b)
{
    return a+b;
}
