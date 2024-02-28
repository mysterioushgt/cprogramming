#include<stdio.h>
int main(){
    // input 121 ---->121 reverse
    int n, c, s =0,r;
    printf("enter any number");
    scanf("%d",&n);
    c=n;
    while ((n>0))
    {
        r=n%10;  //121/10=1
        s=r+(s*10);//s=1
        n=n/10;   //121/10=12
    }
    if(c==s){
        printf("palindrome number");
    }
    else{
        printf("not");
    }
    
}