#include <stdio.h>
#define F_low 0
#define F_max 300
#define Step 20
int main()
{
  typedef float Temp;
  Temp celsius, fahrenheit;
  fahrenheit = F_low;
  printf("Celsius Fahrenheit \n\n");
  while (fahrenheit <= F_max)
  {
    celsius = (fahrenheit - 32) / 1.8;
    printf("%5f %8f \n", celsius, fahrenheit);
    fahrenheit = fahrenheit + Step;
  }
  return 0;
}
