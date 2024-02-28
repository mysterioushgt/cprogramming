// ARGUMENT AND A NO RETURN VALUE
#include <stdio.h>
void printstart(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
}
int main()
{
    printstart(7);
    return 0;
}