// #include<stdio.h>
// int main(){
//     int *p,*q,a,b,r;
//     printf("enter two numbers");
//     scanf("%d%d",&a,&b);

//     p=&a; //address of a
//     q=&b; // address of b
//     r=*p+ *q; // in *p the value of a come
//     printf("sum of numbers: %d",r);
//     return 0;
// }

#include<stdio.h>
int main(){
    int *p,*q,a,b,r;
    printf("enter two numbers");
    scanf("%d %d " ,&a,&b);

    p=&a;
    q=&b;
    r=*p+*q;
    printf("sum of numbers: %d" ,r);
    return 0;
}