#include<stdio.h>
int main(){
    int a,b;

    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);

    if(a==b){
        printf("max= %d",a);
    }
    else{
         printf("max= %d",b);
    }
    if(a>b){

    printf("\nmax = %d" ,a);
    }
    else{
    printf("max =%d" ,b);
    }
    return 0;



}