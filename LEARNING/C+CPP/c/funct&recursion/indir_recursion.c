//  Indirect Recursion : when a function is mutually called by another function in circular manner

#include <stdio.h>
// void odd();
// void even();
// int num = 1;
// void odd()
// {
//     if (num <= 10)
//     {
//         printf("%d", num + 1);
//         num++;
//         even();
//     }
//     return 0;
// }
// void even()
// {
//     if (num <= 10)
//     {
//         printf("%d", num - 1);
//         num++;
//         odd();
//     }
//     return 0;
// }
// int main()
// {
//     even();
//     return 0;
// }

// Linear Recurssion
#define Num 7
int recnum(int **arr[],int n)
{
    if (n==1)
    {
        return arr[0];
    }
    return MaxNum(recurnum(arr,n-1),arr(n-1));
}

int MaxNum(int n,int m)
{
    if(n>m)
     return n;
     return m;
}

int main(){
    int n;
    int arr[Num]={4,8,13,19,5,35,2};
    int max=recnum(arr[],Num);
    printf("The max number is %d ",n);
    return 0;
}
