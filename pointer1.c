#include <stdio.h>
int main()
{
    int a=10,*p , **q;
    p=&a;
    q=&p;
    printf("%d\n",a);
    printf("%d\n",&a); //address of a
    printf("%d\n",p);
    printf("%d\n",*p);
    printf("%d\n",&p); //addrss of p
    printf("%d\n",q);
    printf("%d\n",*q);
    printf("%d\n",**q);
}
