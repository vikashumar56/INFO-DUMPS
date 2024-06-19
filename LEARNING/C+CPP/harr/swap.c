#include<stdio.h>

void swap(int *x , int *y){
int temp;
temp = *x;
*x = *y ;
*y = temp ;
}
int main()
{
    int a = 34 , b = 45 ;
    printf("%d and %d \n", a , b);
    swap (&a , &b);
    printf("%d and %d", a , b);
    return 0 ;
}
