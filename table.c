#include<stdio.h>
int main(){
     int num,i;
  printf("Enter a number to generate the table: ");
  scanf("%d", &num);
  printf("\n table of %d is \n" ,num);

  for (i = 1; i <= 10; ++i) {
    printf("%d * %d = %d \n", num, i, num * i);
  }
  return 0;
}