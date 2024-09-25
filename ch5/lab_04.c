#include <stdio.h>

// Function prototypes
int getMax(int a, int b, int c, int d);
int getMin(int a, int b, int c, int d);

int main() {
    int num1, num2, num3, num4;

    // Ask the user to enter 4 values
    printf("Enter four integers:\n");
    printf("Value 1: ");
    scanf("%d", &num1);
    printf("Value 2: ");
    scanf("%d", &num2);
    printf("Value 3: ");
    scanf("%d", &num3);
    printf("Value 4: ");
    scanf("%d", &num4);

    // Get the maximum and minimum values
    int maximum = getMax(num1, num2, num3, num4);
    int minimum = getMin(num1, num2, num3, num4);

    // Print the results
    printf("Maximum value: %d\n", maximum);
    printf("Minimum value: %d\n", minimum);

    return 0;
}

// Function to get the maximum of 4 values
int getMax(int a, int b, int c, int d) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;
    return max;
}

// Function to get the minimum of 4 values
int getMin(int a, int b, int c, int d) {
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    if (d < min) min = d;
    return min;
}
