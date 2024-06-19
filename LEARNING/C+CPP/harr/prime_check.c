#include<stdio.h>
int main()
{
  int i,n=2,a,prime=0;
  printf("\nEnter the number:");
  scanf("%d",&i);
  while(n<i)
  {
    if(i%n==0)
    {
      prime++;
    }
    n++;
  }
  if(prime==0)
  {
    printf("\nThis number is Prime");
  }
  else
  {
    printf("\nThis number is Not Prime");
  }
  return 0;
}
