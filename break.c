#include <stdio.h>
int main()
{

    printf("break in for loop\n");
    for(int i=1;i<5;i++){
        if(i==4){
            break;
        }
        else{
            printf("%d",i);
            }
    }

// using break using while loop
    // printf("break in for loop\n");
    // int i = 1;
    // while (i < 20)
    // {
    //     if (i == 3)
    //         break;
    //     else
    //         printf("%d", i);
    //     i++;
    // }
}