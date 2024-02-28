#include<stdio.h>
int main(){
    int a=0,b=1,c=2,d,n,i;
    printf("enter no");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d",a);
        d=a+b+c;
        a=b;
        b=c;
        c=d;
    }
    return 0;
}