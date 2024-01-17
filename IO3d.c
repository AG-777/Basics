#include <stdio.h>

int main()
{
    int num;
    char str[20];

    // Using sscanf to read input from a string
    char inputString[] = "Hello no 123";
    sscanf(inputString, "%19[^0-9] %d", str, &num);

    printf("String: %s, Number: %d\n", str, num);

    return 0;
}