#include <stdio.h>
int main()
{
    int y;
    printf("enter any year:\n");
    scanf("%d", &y);
    if (y % 4 == 0 || y % 400 == 0 && y % 100 != 0)
    {
        printf("year is leapyear");
    }
    else
    {
        printf("not leap year");
    }
    return 0;
}