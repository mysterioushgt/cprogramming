#include<stdio.h>
int main()
{

    int num;
    printf("enter the number");
    scanf("%d",&num);
    if(num<10){
        if(num==1){
            printf("the value is : %d" , num);
        }
        else{
            printf("the value is greater than 1");
        }
    }
    else{
        printf("the value is greater than 10");
    }
    return 0;
}