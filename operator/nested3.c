#include<stdio.h>
int main()
{
    int num1,num2,num3,max;
    printf("enter 3 numbers");
    scanf("%d%d%d", &num1 ,&num2 ,&num3);
    if((num1>num2) &&(num1>num3))
    {
        printf("max is %d",num1);
    }
    else if((num2>num1) &&(num2>num3))
    {
        printf("max is %d" ,num2);
    }
    else{
        printf("max is %d",num3);
    }
}