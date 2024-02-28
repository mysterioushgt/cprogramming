#include<stdio.h>
void swap(int x,int y)//address alag hai // formal parameter
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("x=%d y=%d ",x,y);
}
int main(){
    int a=10,b=20;
    swap(a,b);//address //actual
    printf("a=%d b=%d",a,b);

    return 0;
}