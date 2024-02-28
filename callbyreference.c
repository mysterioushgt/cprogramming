#include<stdio.h>
void swap(int *p,int *q)//pointer
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
    printf("%d %d", *p ,*q);
}
int main(){
    int a=100,b=200;
    //address pass karate hai variable ka
    swap(&a,&b);//address pass karte hai reference pass
    printf("a=%d b=%d", a, b);
    return 0;
}