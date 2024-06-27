//Avg three numbers using an array, a constant, and a helper function

#include<stdio.h>
#include<cs50.h>

//constant
const int N=3;

//Prototype to let the compiler know that there is a function which will exist in the program at later stage
float average(int length, int array[]);

int main(void)
{
    //get scores
    int scores[N];
    for (int i = 0; i<N; i++)
    {
        scores[i] = get_int("Score: ");
    }

    //Print Average
    printf("Average: %f\n", average(N, scores));
}

float average(int length, int array[])
{
    //Calculate average -- functioning of the average function
    int sum = 0;
    for(int i = 0; i<length; i++)
    {
        sum +=array[i];
    }
    return sum / (float) length;
}
