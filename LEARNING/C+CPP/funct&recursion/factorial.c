#include<stdio.h>

long fact(int n){

 for ( int i = 1 ; i <=  n ; i++ )
 {
    if(n%i==0)
    {
        n/=i;
    }

 else
   break;

 }

 if(n==1){
    printf("No is factorial of ");
 }

 else
  printf("No %d isn't a factorial of any no.",n);

}

int main(){

  long factorial;
  int n;
  printf("Enter any number which you want to check");
  scanf("%d",&n);
  factorial=fact(n);
  return 0;
}
