#include <stdio.h>

int main()
{
    int subject;
    printf("chose the subject that you passed in \n");
    printf("1.MATHS  , 2.SCIENCE  , 3.BOTH");
    scanf("%d", &subject);
    if (subject == 1)
    {
        printf("Great!!!! You won 15rs");
    }
    else if (subject == 2)
    {
        printf("Great you won 15rs");
    }
    else if (subject == 3)
    {
        printf("BRAVO!!!! You have won 45rs ");
    }
    else
    {
        printf("you have made an invalid choise");
    }
    return 0;
}
