// ARGUMENT AND A RETURN VALUE
#include <stdio.h>
int sum(int a, int b); // function declaration

int main()
{
    int a, b, c;
    a = 10, b = 12, c = 30;
    ;
    c = sum(a, b);
    printf("the sum is %d", c);
    return 0;
}
int sum(int a, int b)
{
    return a + b;
}
