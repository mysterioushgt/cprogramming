#include<stdio.h>
int main(){
    int num1=0,num2=1,n,num3,i;
    printf("enter no");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        printf("%d",num1);
        num3=num2+num1;
    }
    num1=num2;
    num2=num3;

    return 0;
}