#include <stdio.h>

int main() {
    // Declare variables of different types
    char charVar;
    int intVar;
    float floatVar;
    double doubleVar;
    long longVar;
    short shortVar;
    unsigned int unsignedIntVar;

    // Print the size of each variable
    printf("Size of char: %zu bytes\n", sizeof(charVar));
    printf("Size of int: %zu bytes\n", sizeof(intVar));
    printf("Size of float: %zu bytes\n", sizeof(floatVar));
    printf("Size of double: %zu bytes\n", sizeof(doubleVar));
    printf("Size of long: %zu bytes\n", sizeof(longVar));
    printf("Size of short: %zu bytes\n", sizeof(shortVar));
    printf("Size of unsigned int: %zu bytes\n", sizeof(unsignedIntVar));

    return 0;
}
