#include<stdio.h>

int swap(int *a , int *b){

int c;
c=*a;
*a=*b;
*b=c;
return;

}

int main(){
   int a , b;
   printf("Enter the valus of a and b \t ");
   scanf("%d %d ",&a,&b);
   printf("\n Before swapping a=%d \t b=%d",a,b);
   swap(&a,&b);
   printf("\n After swapping a=%d \t b=%d",a,b);

    return 0;
}
