#include <stdio.h>
int main()
{
    int a[5], i;
    printf("Enter Array Elements:");
    for (i = 0; i < 5; i++) // i=0,1
    {
        scanf("%d", &a[i]); // 10
    }
    printf("Array Element:");
    for (i = 0; i < 5; i++) // print
    {
        printf("%d", a[i]); // 10,20,30,40,50
    }
    return 0;
}