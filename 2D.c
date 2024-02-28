#include <stdio.h>
int main()
{
    int a[2][2], i, j;
    printf("enter elements in array");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("array element in matrix form:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
}