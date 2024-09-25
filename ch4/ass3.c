#include <stdio.h>

int main() {
    int h = 0;

    // Ask for the height of the pyramid
    printf("Enter the height of the pyramid: ");
    scanf("%d", &h);  // Use &h to correctly store the input value in the variable

    // Outer loop for rows
    for (int i = 1; i <= h; i++) {
        // Print spaces to align the pyramid
        for (int j = i; j < h; j++) {
            printf(" ");
        }

        // Print stars to form the pyramid
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
