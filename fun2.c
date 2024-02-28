// NO ARGUMENT AND A RETURN VALUE
#include <stdio.h>
int getNumber()
{
    int i;
    printf("enter a number");
    scanf("%d", &i);
    return i;
}
int main()
{
    int c;
    c = getNumber(); // calling
    printf("the number entered is %d", c);

    return 0;
}