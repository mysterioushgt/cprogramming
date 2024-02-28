#include <stdio.h>
int main()
{
    // input 123 ------>1+2+3=6
    int n, sum = 0, r;
    printf("enter any number");
    scanf("%d", &n); // 123
    while (n > 0)
    {
        r = n % 10;    // r=3,2,1
        sum = sum + r; // sum=3(3+2=5) (5+1=6)
        n = n / 10;    // n=12 (123/10) (12/10=1) (10/1=0)
    }
    printf("Sum of Digits: %d", sum);

    

    return 0;
}