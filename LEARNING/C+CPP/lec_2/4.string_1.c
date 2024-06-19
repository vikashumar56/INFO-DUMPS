#include<cs50.h>
#include<stdio.h>
int main()
{
    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';

    printf("%i %i %i\n", c1,c2,c3);

    printf("%c%c%c\n", c1,c2,c3);

    string s = "HI!";
    printf("%s\n", s);

    printf("%c%c%c\n", s[0],s[1],s[2]);
}
 /*Now one question might arise is that how does the computer
 know that string ends at some point. now the computer knows
cause a string is a type of array cause if we take string
named as vikas then it is simply an array comprising of an
array with size as 5. so at the end of size limit there is
is a sentinel value as 000000 or \0 or NUL which tells the
computer that the particular char string has reached the limit */
