// array program to print reverse order

#include <stdio.h>
int main()
{
    int a[5], i;
    printf("enter array elements:");
    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("reverse array elements");
    for (i = 4; i >= 0; i--)
    {
        printf("%d",a[i]);
    }
    return 0;
}