#include <stdio.h>
int main()
{
    int a[5], mul = 1, i;
    printf("enter array elements");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("multiplication of array elements");
    for (i = 0; i < 5; i++)
    {
        mul = mul * a[i];
    }
    printf("%d", mul);
    return 0;
}
// if-else--2
// if-else-if --2
// while,for--2
// function-3 ,array-3
