#include <stdio.h>
int main()
{
  char c;
  printf("Enter a character: ");
  c = getchar();
  printf("Entered character: ");
  putchar(c);
  printf("\n");
  return 0;
}