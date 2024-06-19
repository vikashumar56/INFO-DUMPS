#include<stdio.h>

int main()
{
    //Normal way for storing data in identifiers
    int score1 = 72;
    int score2 = 73;
    int score3 = 33;

    //now as we delve into arrays
    int scores[3]; //declares size as 3
    scores[0] = 72; //puts value1 at location or index 0
    scores[1] = 73;
    scores[2] = 33;

    //another way to put data in array is directly inialtzing in one line
    int array[] = {13,14,15};

    //now to make it more interactive
    int scores[3];
    scores[0] = get_int("scores: ");
    scores[1] = get_int("scores: ");
    scores[2] = get_int("scores: ");

    //now all of the above are still bed design since anything which is repeating again n again so we can simply us a for loop
    for(int i=0; i<3; i++)
    {
        scores[i] = get_int("Score: ");
    }

    printf("Avg: %f\n", (score[1]+ score[2]+ score[3])/ 3.0 );
}

//now
int main()
{
    const int N = 3; //now it is a local variable but to make it a global variable just move above int main
    int scores[N];
    for(int i=0; i<N; i++)
    {
        scores[i] = get_int("Score: ");
    }

    printf("Avg: %f\n", (score[1]+ score[2]+ score[3])/ (float) N ); //now here we did typecasting with N by giving it a float
}
