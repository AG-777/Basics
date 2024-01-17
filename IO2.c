#include <stdio.h>
int main()
{
  char string[100];
  int n = 23;
  sprintf(string,"The answer is %d",n);
  printf("Formatted Output: %s\n",string);
}
