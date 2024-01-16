#include <stdio.h>
#include <stdbool.h>
#include <stddef.h> // Include the header for ptrdiff_t
int main(){
   // Integer Types
    int intVar = 42;
    short shortVar = 32767; // maximum value for short
    long longVar = 123456789L;
    long long longLongVar = 123456789012345LL;
    unsigned int uintVar = 4294967295U; // maximum value for unsigned int
    unsigned short ushortVar = 65535; // maximum value for unsigned short
    unsigned long ulongVar = 4294967295UL; // maximum value for unsigned long
    unsigned long long ulongLongVar = 18446744073709551615ULL; // maximum value for unsigned long long

    // Character Type
    char charVar = 'A';

    // Floating-Point Types
    float floatVar = 3.14f;
    double doubleVar = 3.14159265358979;
    long double longDoubleVar = 3.14159265358979323846L;

    // Pointers
    int *intPtr = &intVar;

    // Size Types
    size_t sizeVar = sizeof(intVar);
    ptrdiff_t ptrDiffVar = intPtr - &intVar;

    // Boolean Type
    bool boolVar = true;

    // Output
    printf("Integer: %d\n", intVar);
    printf("Short: %hd\n", shortVar);
    printf("Long: %ld\n", longVar);
    printf("Long Long: %lld\n", longLongVar);
    printf("Unsigned Int: %u\n", uintVar);
    printf("Unsigned Short: %hu\n", ushortVar);
    printf("Unsigned Long: %lu\n", ulongVar);
    printf("Unsigned Long Long: %llu\n", ulongLongVar);
    printf("Character: %c\n", charVar);
    printf("Float: %f\n", floatVar);
    printf("Double: %lf\n", doubleVar);
    printf("Long Double: %Lf\n", longDoubleVar);
    printf("Pointer: %p\n", (void *)intPtr);
    printf("Size_t: %zu\n", sizeVar);
    printf("Ptrdiff_t: %td\n", ptrDiffVar);
    printf("Boolean: %d\n", boolVar);
    return 0;
}
