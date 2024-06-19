#include<stdio.h>

//  with argument and with return

// int sum(int a, int b){
//     return a+b;
// }

// int main(){
//     int a, b, c;
//     printf("Enter the value of a \t");
//     scanf("%d",&a);
//     printf("Enter the value of b \t");
//     scanf("%d",&b);
//     c=sum(a,b);
//     printf("The sum of a and b is  %d \t ",c);
//     return 0;
// }

//  with argument and without return

// void print_star(int n ){
//     int i;
//     for ( i = 0; i < n; ++i)
//     {
//         printf("%c \n ",'*');
//     }
// }

// int main(){
//  int n;
//  print_star(5);
//  return 0;

// }

// without argument and with return

int takenumber(){
    int i;
    printf("Enter a number \t ");
    scanf("%d",&i);
    return i;
}

int main(){
    int c;
    c=takenumber();
    printf("The number is %d \t",c);
    return 0;
}

//  with
