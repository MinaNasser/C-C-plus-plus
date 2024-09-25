#include <stdio.h>

// Global variables
int a = 5;
int b = 10;

// Function to swap the values of global variables
void swap() {
    int temp;
    temp = a; // Store the value of a in a temporary variable
    a = b;    // Assign the value of b to a
    b = temp; // Assign the value of temp (original a) to b
}

int main() {
    // Print original values
    printf("Before swapping: a = %d, b = %d\n", a, b);
    
    // Call the swap function
    swap();
    
    // Print swapped values
    printf("After swapping: a = %d, b = %d\n", a, b);
    
    return 0;
}
