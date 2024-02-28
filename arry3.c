// c prgm to find maximum and minimum element of array

#include <stdio.h>
int main()
{
    // a[size]=10 50 20 40 30---->max=50 min=10
    int a[100], size, i, min;
    printf("enter size of array");
    scanf("%d", &size);
    printf("enter value in array");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    min = a[0];
    for (i = 0; i < size; i++)
    {
        if (a[i] <min)
        {
            min = a[i];
        }
    }
    printf("maximum value of array:%d", min);
    return 0;
}