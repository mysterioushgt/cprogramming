#include<stdio.h>
int main() {
    int num1 , num2, num3, max;
    //  input three numbers from user
     printf("enter three numbers:");
     scanf("%d %d%d" , &num1 ,&num2 ,&num3);

     if((num1>num2)&&(num1>num3))
     {
        // if num1 is greater than both
        max= num1;
     }
     else if((num2>num1)&&(num2>num3))
     {
        // if num1 is greater than both
        max= num2;
     }
     else
     {
        // if num1 is greater than both
        max= num3;
     }

     printf("maximum among all three numbers is :%d" ,max);
}