#include<stdio.h>
int main(){
    float p,cost,cost1,p1;
    for ( p = 0; p <= 10; p =p+0.1)
    {
        cost=40-8*p+p*p;
        if(p==0){
         cost1=cost;
         continue;
        }

    if(cost>=cost1){
            break;
            cost1=cost;
            p1=p;
         }
    }
         p=(p+p1)/2.0;
         cost=40-8*p+p*p;

         printf("The minimum cost is %0.3f at %0.2f",cost,p);

}
