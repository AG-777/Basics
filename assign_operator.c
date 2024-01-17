#include <stdio.h>
int main()
{
  int a = 21;
  int c;
  c = a;
  printf("= :%d\n",c);
  c += a;
  printf("+= :%d\n",c);
  c -= a;
  printf("-= :%d\n",c);
  c *= a;
  printf("*= :%d\n",c);
  c /= a;
  printf("/= :%d\n",c);
  c %= a;
  printf("%%= :%d\n",c);
  c = 200;
  a =2;
  c >>= a;
  printf(">>= :%d\n",c);
  c <<= a;
  printf("<<= :%d\n",c);
  c &= a;
  printf("&= :%d\n",c);
  c ^= a;
  printf("^= :%d\n",c);
  c |= a;
  printf("|= :%d\n",c);
}
