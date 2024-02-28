#include<stdio.h>
int main(){
    int a=10,b=20,*p,*q,temp;
    p=&a;
    q=&b;
    printf("enter two numbers");
    scanf("before swapping: %d %d",a,b);
    temp=*p;
    *p=*q;
    *q=temp;
    printf("after swapping: %d %d",*p,*q);
    return 0;
}