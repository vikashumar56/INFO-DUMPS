#include<stdio.h>
#include<stdlib.h>

enum directions{
    North,South,East,West //here by default location is 0,1,2 which is the standard
};

int main()
{
    enum directions now;
    now=South;
    printf("The value of now is %d\n",now+1);
}
