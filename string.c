#include <stdio.h>
int main() {
    // Declare a character array to store the string
    char myString[5];

    // Ask the user to enter a string
    printf("Enter a string: ");

    // Use scanf to get the string from the user
    scanf("%.4s", myString);

    // Display the entered string
    printf("You entered: %s\n", myString);

    return 0;
}