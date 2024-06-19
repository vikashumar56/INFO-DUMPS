#include <stdio.h>
#include <conio.h>
#include <math.h>
#define pi 3.14
#define max 180
int main()
{
  int angle;
  float x, y;
  angle=0;
  printf(" Angle         Cos(angle) \n");
  while (angle <= max)
  {
    x = (pi / max) * angle;
    y = cos(x);
    printf("%5d %15.4f\n", angle, y);
    angle = angle + 10;
  }

  return 0;
}
