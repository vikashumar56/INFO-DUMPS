#include <stdio.h>
 // Armstrong numbers
int main()
{
    int num,r,sum=0,orgnum;
    printf("Enter a number ");
    scanf("%d",&num);
    orgnum=num;
    while (orgnum!=0)
    {
        r=orgnum%10;
        sum=sum+(r*r*r);
        orgnum=orgnum/10;
    }
    if (sum==num)
    {
        printf("%d is a armstrong number",num);
    }
    else
      printf("%d is not armstrong numbers",num);
    return 0;
}
