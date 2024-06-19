#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

int game(char you, char computer)
{
    // If both have same answer
    if (you == computer)
        return -1;

    // if user chose SCISSIOR and computer chose ROCK
    if (you == 's' && computer == 'r')
        return 0;

    // if user chose ROCK and computer chose SCISSOR
    else if (you == 'r' && computer == 's')
        return 1;

    // if user chose ROCK and computer chose PAPER
    if (you == 'r' && computer == 'p')
        return 1;

    // if user chose PAPER and computer chose ROCK
    else if (you == 'r' && computer == 's')
        return 0;

    // if user chose SCISSIOR and computer chose PAPER
    if (you == 's' && computer == 'p')
        return 0;

    // if user chose PAPER and computer chose SCISSOR
    else if (you == 'p' && computer == 's')
        return 1;
}

int main()
{

    int n;
    char you, computer, result;

    // Chose the random number anytime
    srand(time(NULL));

    n = rand() % 100;

    if (n < 33)
        // S denotes SCISSOR
        computer = 's';

    else if (n > 33 && n < 66)
        // P denotes PAPER
        computer = 'p';

    else
        // Z denotes ROCK
        computer = 'r';

    printf("\n\n\t\t ENTER \t s for Scissor \t p for Paper \t r for Rock \t ");
    scanf("%c", &you);

   // Function call to play game

    result = game(you, computer);

    if (result == -1)
    {
        printf("\n\n\t\t\t It's a draw ");
    }

    else if (result == 1)
    {
        printf("\n\n\t\t\t Congragulaions 'YOU WON' ");
    }
    else
    {
        printf("\n\n\t\t\t Computer won  Better luck next time");
    }
    printf("\n \n \t\t\t\tYou choose : %c and Computer choose : %c\n", you, computer);

    return 0;
}
