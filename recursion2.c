// c program to print fabonic series using recursion
#include<stdio.h>
int Fibonacci(int);
int main()
{
    int Num,i;
    printf("enter the number of term:");
    scanf("%d",&Num);
    for ( i = 0; i < Num; i++)
    printf("%d",Fibonacci(i)); //0 1 1 2...
    return 0;
}
int Fibonacci(int n)
{
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return Fibonacci(n-1)+Fibonacci(n-2);
}