#include<cs50.h>
#include<stdio.h>

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");

    printf("%f\n",x/y);
}
/*nwo here this will result in an error cause format specified is double but the argument is in integer*/

float z = x/y;
printf("%f",z);

/*now here this will turn into a case of truncation cause in the starting it  takes an integer divides by an integer so yes it will also result in an integer value. so, this throws all the decimal values away but even though we have introduced float value it will give decimal value but only in zeroes */

//bow one of the correct way is  typecasting

float z=(float) x / (float) y;
printf("%f\n",z)

 //one of the other issue is float point imprecision
