#include<stdio.h>
int main(){
     int num1 , num2, num3, max;
    //  input three numbers from user
     printf("enter three numbers:");
     scanf("%d %d%d" , &num1 ,&num2 ,&num3);

     if(num1 > num2){
        if(num1 >num3){

            // if num1> num2 and num1 >num3
            max=num1;
        }
        else{

            // if num1>num2 but num1 > num3 is no
            max= num3;
        }
     }
     else
     {
        if(num2 > num3)
        {
            // if um1 is not >num2 and num2> num3
            max=num2;
        }
        else{
            // if numm1 is not > um2 and num2 >num3
            max= num3;
        }
     }

     printf("maximum among all three numbers is :%d" ,max);
}