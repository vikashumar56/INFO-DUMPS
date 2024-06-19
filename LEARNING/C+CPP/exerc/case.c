#include <stdio.h>
#include <ctype.h>
int main()
{
    // for changing lower letter to upper and vice versa

    char aplhabet;
    printf("enter an aplhabet \t");
    aplhabet = getchar();
    if (islower(aplhabet))
    {
        putchar(toupper(aplhabet));    /* putchar  is used to print character */
    }
    else
    {
        putchar(tolower(aplhabet));
    }
    return 0;
}
