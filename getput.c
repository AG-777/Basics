#include <stdio.h>

int main()
{
  char string[15];
  printf("Enter a line of text :\n");
  // Read a line from the user into the string
  if (fgets(string, sizeof(string), stdin) != NULL)
  {
    // Print the entered line
    printf("You entered: %s\n", string);
  }
  return 0;
}
