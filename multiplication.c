#include<stdio.h>
int main(){
    //input 5----->5,10,20,25
    int n,i;
    printf("enter any number");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        //printf("%d",n*i);
        printf("%d*%d=%d\n",n,i,n*i);
    }
    return 0;
}