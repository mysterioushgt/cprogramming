#include<stdio.h>
int main(){

int i,sum=0;
printf("first 10 natural no.s is\n");
for(i=1;i<=10;i++){
    printf("%d\n",i);
    sum=sum+i;
}
printf("sum is %d" ,sum);
}