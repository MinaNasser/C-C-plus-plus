#include <stdio.h>

// Function prototype
int GetMax(int a, int b);

int main() {
    int num1, num2, max;

    // Ask the user to enter two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Call the GetMax function and store the result
    max = GetMax(num1, num2);

    // Print the maximum value
    printf("The maximum value is: %d\n", max);

    return 0;
}

// Function definition
int GetMax(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
