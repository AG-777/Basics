#include <stdio.h>
int main()
{
  char abc[100];
  int n;
  printf("Enter a value: ");
  scanf("%[^\n] %d",abc,&n);
  printf("The value you entered: %s \t %d\n",abc,n);
  return 0;
}