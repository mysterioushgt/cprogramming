#include<stdio.h>
int main(){

   int num, i;
 
    printf("Enter a Number ");
    scanf("%d",&num);
    i=1;
    while(i<=10){
                
        printf("%d * %d = %d \n", num, i, num*i);
        i++;
    }
     
    
}
