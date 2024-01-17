#include <stdio.h>
int main()
{
  int a, b;
  printf("a: ");
  scanf("%d", &a);
  printf("b: ");
  scanf("%d", &b);

  int add, sub, multiply, modulus;
  float div;

  add = a + b;
  sub = a - b;
  multiply = a * b;
  div = (float)a / b;
  modulus = a % b;
  printf("Addition is %d\n", add);
  printf("Subtraction is %d\n", sub);
  printf("Multiplication is %d\n", multiply);
  printf("Division is %.2f\n", div);
  printf("Modulus is %d\n", modulus);
}