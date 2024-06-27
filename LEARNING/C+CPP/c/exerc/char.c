#include <stdio.h>
#include <ctype.h>

/* Program to check that characteer is number or letter */
int main()
{
    char character;
    printf("Enter any key \t");
    character = getchar();
    if (isalpha(character) > 0)
        printf("The Chracter is letter");
    else if (isdigit(character) > 0)
        printf("The character is number");
    else
    {
        printf("The charcater is special character");
    }
    return 0;
}


/* program to convert lower into upper letter */
// int main()
// {
//     char character;
//     printf("Enter a letter \t");
//     character = getchar();
//     if (isupper(character) > 0)
//          putchar(tolower(character));

//     else
//         putchar(toupper(character));

//     return 0;
// }
