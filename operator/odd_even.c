#include<stdio.h>
int main(){
    int number;

    printf("enter any number\n");
    scanf("%d", &number);

    if(number%2 ==0){

        printf("number %d is an even integer" ,number);
    }
    else{
       printf("number %d is an odd integer" ,number);
    }

    return 0;
}