#include <stdio.h>
int main()
{
    int num, i = 1;
    printf("\n Enter any Number:");
    scanf("%d", &num);
    printf(" table of %d: \n", num);
    do
    {
        printf(" %d * %d = %d \n", num, i, num * i);
        i++;
    } while (i <= 10);
}






