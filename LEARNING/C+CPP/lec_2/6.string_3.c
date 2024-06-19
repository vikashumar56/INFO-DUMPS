#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main()
{
    string s = get_string("Input: ");
    printf("Output: ");

    //declare one by one n then implment for loop
    int length = strlen(s);
    for (int i=0; i<length; i++)

    //another way is to get all of this done in the loop instead
    for (int i=0, n = strlen(s); i<n; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}
