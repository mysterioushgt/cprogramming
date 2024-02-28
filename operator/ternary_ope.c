#include<stdio.h>

int main(){
    int a,b,max;
    printf("enter two numbers:\n");
    scanf("%d%d" ,&a,&b);
    max=(a>b)?a:b;
    printf("\n max number= %d" , max);

    return 0;
}