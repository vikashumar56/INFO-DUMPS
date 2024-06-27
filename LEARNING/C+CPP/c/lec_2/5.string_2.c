#include<stdio.h>
#include<cs50.h>

int main(void)
{
    string name = get_string("Name: ");

    int n=0;
    while(name[n] !='\0')
    {
        n++;
    }
    printf("%i\n",n);
}

// another way is

int string_length(string s);

int main()
{
    string name = get_string("Name: ");
    int length = string_length(name);
    printf("%i\n", length);
}

int string_length(string s)
{
    int n = 0;
    while (s[n] != '\0')
    {
        n++;
    }
    return n;
}

//another simple n short way is with the header file string.h

#include<string.h> //
int main()
{
    string name= get_string("Name: ");
    int length = strlen(name);
    printf("%s", length);
}

//

