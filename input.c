#include <stdio.h>

int main() {
    // Declare variables to store user input
    int integerInput;
    float floatInput;
    char charInput;
    double doubleInput;

    // Taking integer input
    printf("Enter an integer: ");
    scanf("%d", &integerInput);

    // Taking float input
    printf("Enter a floating-point number: ");
    scanf("%f", &floatInput);

    // Taking character input
    printf("Enter a character: ");
    scanf(" %c", &charInput);  // Note the space before %c to consume any whitespace characters

    //Taking Double input
    printf("Enter a floating-point number: ");
    scanf("%lf",&doubleInput);

    // Displaying the input
    printf("You entered: %d, %f, %c, %lf\n", integerInput, floatInput, charInput, doubleInput);
    return 0;
}