#include <stdio.h>
int main()
{
    // 1D array
    int a[5], i;
    printf("enter elements is array");
    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("array elements:");
    for (i = 0; i <= 4; i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}