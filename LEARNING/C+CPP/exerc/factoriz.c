#include <stdio.h>
int main(){
    /* factorization using loops */
    int i,n,factor=1;
    printf("Enter the number you want to factorize : \t");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        factor=factor*i;
    }
   printf("The factorization of %d is : %d ",n,factor);
   return 0;
}

