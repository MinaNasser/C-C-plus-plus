#include <stdio.h>

#define SIZE 10

int main() {
    int values[SIZE];
    int i;
    int sum = 0;
    float average;

    // Ask the user to enter 10 values
    printf("Enter %d values:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        printf("Value %d: ", i + 1);
        scanf("%d", &values[i]);
        sum += values[i];  // Add each value to the sum
    }

    // Calculate the average
    average = (float)sum / SIZE;

    // Print the summation and the average
    printf("\nSum of the values: %d\n", sum);
    printf("Average of the values: %.2f\n", average);

    return 0;
}
