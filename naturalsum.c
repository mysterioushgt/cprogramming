#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("enter the natural numbers:\n");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        printf("sum of 10 natural no.s is");
        sum = sum + i;
    }
    return 0;
}