//  calculator using switch
#include <stdio.h>
#include <math.h>
int main()
{
  int x, y, sum, sub, mult, div;
  char opt;

  printf("Enter two values ");
  scanf("%d %d", &x, &y);

  printf(" Which one of the following operation you wanted to do  + , - , * , / ");
  scanf("%c", &opt);

  switch (opt)
  {
  case '+':
    sum = x + y;
    printf("The sum of %d and %d are %d", x, y, sum);
    break;

  case '-':
    sub = x - y;
    printf("The substraction of %d and %d are %d", x, y, sub);
    break;

  case '*':
    mult = x * y;
    printf("The multiplication of %d and %d are %d", x, y, mult);
    break;

  case '/':
    div = x / y;
    printf("The division of %d and %d are %d", x, y, div);
    break;

  default:
    printf(" \n Enter one of the  above values ");
    break;
  }
  return 0;
}
