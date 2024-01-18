#include <stdio.h>
int main()
{
  unsigned int n1 = 15,n2;
  n2 = ~n1; 
  int n3 = 15,n4;
  n4 = ~n3;
  printf("~n1(signed): %u\n",n2);
  printf("~n3(unsigned): %d\n",n4);
}