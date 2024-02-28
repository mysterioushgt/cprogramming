//FACTORIAL WITHOUT LOOP:-
#include <stdio.h>
int m1(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * m1(n - 1); // call itself
}
int main()
{
    int n, f;
    printf("enter any no.");
    scanf("%d", &n);
    f = m1(n); // call
    printf("Fcatorial %d", f);
    return 0;
}