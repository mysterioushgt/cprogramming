// c program to print first N natural numbers using recursion
#include <stdio.h>
void natural(int n) // n=1
{
    if (n <= 3)
    {
        printf("%d", n);
        natural(n + 1);
    }
}
int main()
{
    int n = 1;
    natural(n);
    return 0;
}