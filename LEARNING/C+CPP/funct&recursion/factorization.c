#include<stdio.h>

long factorization(int n)
{
    if (n == 0)
        return 1;
    else
        return (n * factorization(n - 1));

}
int main()
{
    int number;
    printf("Enter the no whose factorization you want to find \t");
    scanf("%d",&number);
    printf("The factorization of %d! is %ld", number, factorization(number));
    return 0;
}
