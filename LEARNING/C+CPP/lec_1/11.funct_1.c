#include <stdio.h>

 int main(void) /* here we can set the parameter for the function to be void or simply blank so that it does not have a return type*/

 {
    for (int i = 0; i<3; i++)
    {
        hello();
    }
 }

 /* now here this will result in an error since there is no function that exist as hello to avoid this error we have to declare the function hello first*/

void hello()
{
    printf("hello\n");
}
 /* this will still throw up a error since the function is called before even it is declared*/

 /* so the best way is to first declare the function then call it*/



 void hello() // or void hello (void)
 {
    printf("hello\n");
 }
 int main(void)
  {
     for (int i=0; i<3; i++)
     hello();
   }


// now another way to do is using the n limit

/* here we first let the compiler know that there is a function named hello which has argument as int n and there is no return type also we don't tell what the function actually is but yes we tell it that there is a function named as hello and the working will be coded somewhere in the program then next is the main function which is like the entry point of the program which lets the compiler know that this is the entry point here we call the "hello" function with argument as 3000 but we still have not explained how will it print that much argument.   */

 void hello(int n);

 int main(void)
 {
   hello(3000);
 }
  /* this here is where all the crux happens where the brain is it tells the program how will it print "hello" 3000 times */

 void hello(int n)

 {
   for (int i=0; i<n; i++)
   {
     printf("Hello\n");
   }
 }