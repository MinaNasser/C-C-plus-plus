#include <stdio.h>

int main() {
    int number, factorial = 1, i = 1;

    // Ask the user for input
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &number);

    // Using while loop to calculate factorial
    while (i <= number) {
        factorial *= i;  // Multiply current value of factorial by i
        i++;             // Increment i
    }

    // Display the result
    printf("Factorial of %d is %d\n", number, factorial);

    return 0;
}
