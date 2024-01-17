#include <stdio.h>
int main()
{
  int a, b, c, d;
  a = 20;
  b = (a > 10 && a < 60);
  c = (a < 10 || a < 60);
  d = !(a > 10);

  printf("%d\n", b);
  printf("%d\n", c);
  printf("%d\n", d);
  return 0;
}