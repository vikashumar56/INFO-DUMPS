#include<stdio.h>


int main(void)
{
    for (int i=0; i<=3; i++)
    {
        printf("i is %i\n",i);
        printf("#\n");
    }
}

void print_column(int height);

int main()
{
    int h=get_int("Height: ");
    print_column(h);
}

void print_column(int height)
{
    for (int i=1; i<=height; i++)
}

