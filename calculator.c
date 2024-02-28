#include <stdio.h>
int main()
{
    int a, b, ch, add, sub, multi, div, rem;
    printf("enter user choice 1 addition ,2 sub ,3 multi, 4 div, 5 rem:");
    scanf("%d", &ch);
    printf("enter two numbers:");
    scanf("%d%d", &a, &b);
    if (ch == 1)
    {
        add = a + b;
        printf("addition:%d", add);
    }
    else if (ch == 2)
    {
        sub = a - b;
        printf("subtraction:%d", sub);
    }
    else if (ch == 3)
    {
        multi = a * b;
        printf("multiplication:%d", multi);
    }
    else if (ch == 4)
    {
        div = a % b;
        printf("division:%d", div);
    }
    else if (ch == 5)
    {
        rem = a / b;
        printf("remainder:%d", rem);
    }
    else
    {
        printf("invalid choice");
    }
}