#include <stdio.h>

#define SIZE 10

int main() {
    int values[SIZE];
    int i;

    // Ask the user to enter 10 values
    printf("Enter %d values:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        printf("Value %d: ", i + 1);
        scanf("%d", &values[i]);
    }
    
    // Print the values in reverse order
    printf("\nValues in reverse order:\n");
    for (i = SIZE - 1; i >= 0; i--) {
        printf("%d\n", values[i]);
    }

    return 0;
}
