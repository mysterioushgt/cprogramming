//argument and return value practice
#include<stdio.h>

int Multiplication(int, int);        

int main()
{
  int a, b, Multi;

  printf("\n Please Enter two integer values \n");
  scanf("%d %d",&a, &b);

  //Calling the with dynamic values
  Multi = Multiplication(a, b);

  printf("\n Multiplication of %d and %d is = %d \n", a, b, Multi);        
  return 0;            
}

int Multiplication(int a, int b)
{
  int Multi;  

  Multi = a * b;

  return Multi;
}