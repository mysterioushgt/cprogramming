#include<stdio.h>

int main(){
    int x=20;
    int y=1;
    printf("%d\n", x && y);
    printf(" a && b= %d\n" ,!y);

    // printf("%d" ,x>3 && x<50);
    // printf("%d" ,x>3 || x<50);
    printf("%d" ,!(x>3 && x<50));
    return 0;

}