// Using while loop

#include <stdio.h>
int main(void)
{
   /*Using while loop we set the counter start value to 3 where the while loop runs in which the counter is tasked to reduce its value by 1 until it reaches 0 which is the parameter set in the while condition */
    int counter = 3;
    while (counter>0)
    {
        printf("Hello\n");
        counter = counter - 1;
    }
    /* Here this is a more of a refactor version of the above program where we print hello world by iterating it five times by decrementing  one by one i.e. by counting backawards from the n value */

    int i = 5;
    while (i>0)
    {
        printf("Hello World\n");
        i--;
    }

    /* Now this program starts the count from either 1 or 0 as defined by the user and then count upto the n number i.e. like it will count from 0,1,2 or 1,2,3.
    */

    int i=1;
    while(i<=3)
    {
        printf("Hello World\n");
        i++;
    }

    int i=0;
    while(i<3)
    {
        printf("Hello World\n");
        i++;
    }

    /* Now all of the above are for finite loop only but a block to run for infinite loop we simply the set the while condition to be true on the condition that we have to import the the boolean library*/
    while (true)
    {
       printf("Hello World\n");
    }
}

