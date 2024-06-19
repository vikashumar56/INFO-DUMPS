#include<stdio.h>

int main(){

    int arr[100],i,count_3=0,count_7=0;
    int arr_3[100], arr_7[100];

    for(i=0;i<100;i++){
        arr[i]=i+1;
    }

    // The multiples of 3

     printf("\n The multiples of 3 upto 100 is \n");

     for(i=0;i<100;i++){
       if (arr[i]%3==0)
       {
         printf("%d \t",arr[i]);
         count_3=count_3+1;
       }
     }

      printf("\n The total number of multiples of 3 from 1-100 is %d ",count_3);

      printf("\n The matrices of 3 are \t");

      for(i=0;i<100;i++){
       if (arr[i]%3==0)
       {
         arr_3[i]=arr[i];
         printf("%d \t",arr_3[i]);
       }
     }

     // The multiples of 7

     printf("\n The multiples of 7 upto 100 is \n");

     for(i=0;i<100;i++){
       if (arr[i]%7==0)
       {
         printf("%d \t",arr[i]);
         count_7=count_7+1;
       }
     }

     printf(" \n The total number of multiples of 7 from 1-100 is %d ",count_7);

     printf("\n The matrices of 7 are \t");

      for(i=0;i<100;i++){
       if (arr[i]%3==0)
       {
         arr_7[i]=arr[i];
         printf("%d \t",arr_7[i]);
       }
     }

}
