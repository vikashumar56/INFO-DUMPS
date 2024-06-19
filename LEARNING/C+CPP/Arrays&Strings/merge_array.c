#include<stdio.h>

int main(){
    int arr1size=5, arr2size=5, arr_size, i ,j;
    int a[] = {1,2,3,4,5};

    int b[] = {6,7,8,9,10};

    arr_size=arr1size+arr2size;
    int c[arr_size];

    for ( i = 0; i < arr1size; i++)
    {
        c[i]=a[i];
    }

    for ( i = 0 , j=arr1size ; i < arr2size && j < arr_size; i++,j++)
    {
       c[j]=b[i];
    }

    for ( i = 0; i < arr_size; i++)
    {
        printf("%d",c[i]);

    }
     return 0;
}
