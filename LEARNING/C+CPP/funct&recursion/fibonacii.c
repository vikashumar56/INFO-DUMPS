// Fibonnic series by recurssion

int fib(int n){
    if (n==1 || n==2)
    {
        return n;
    }

    else return (fib(n-1) + fib(n-2));

}
int main(){
 int n;
 printf("Enter ther value of n ");
 scanf("%d",&n);
 printf("The factorial of %d is %d",n,fib(n));
 return 0;

}
