#include<stdio.h>
int main() {
  int a, b, temp;
  printf("Enter first number: ");
  scanf("%d", &a);
  printf("Enter second number: ");
  scanf("%d", &b);

  // value of first is assigned to temp
  temp = a;

  // value of second is assigned to first
  a = b;

  // value of temp (initial value of first) is assigned to second
  b = temp;

  // %.2lf displays number up to 2 decimal points
  printf("\nAfter swapping, first number = %d\n", a);
  printf("After swapping, second number = %d", b);
  return 0;
}