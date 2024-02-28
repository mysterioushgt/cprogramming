#include<stdio.h>
int main(){
    int number1,number2;

    printf("enter two integers");
    scanf("%d%d",number1,&number2);

    //checks if the two integers are equal.
    if(number1==number2){
        printf("result: %d=%d" ,number1,number2);
    }

    //checks if number1 is greater than number2.
    else if(number1>number2){
         printf("result: %d>%d" ,number1,number2);
    }

    // checks if both test expressions are false
    else{
         printf("result: %d<%d" ,number1,number2);
    }
}