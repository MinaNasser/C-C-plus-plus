#include <stdio.h>

int main() {
    int num1, num2;
    char choice;

    // Infinite loop to keep asking for input
    while (1) {
        // Asking the user for two numbers
        printf("Enter two numbers (or type 'q' to quit): \n");

        // Check if the user wants to quit
        if (scanf("%d %d", &num1, &num2) != 2) {
            // If input is not two integers, break out of the loop
            printf("Exiting...\n");
            break;
        }

        // Calculate and print their sum
        printf("The sum of %d and %d is: %d\n", num1, num2, num1 + num2);

        // Asking user if they want to continue
        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &choice);  // Space before %c to ignore previous newline character

        if (choice == 'n' || choice == 'N') {
            printf("Goodbye!\n");
            break;
        }
    }

    return 0;
}
