#include <stdio.h>

int main() {
    int numbers[3];

    // Read three numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &numbers[0]);
    printf("Enter the second number: ");
    scanf("%d", &numbers[1]);
    printf("Enter the third number: ");
    scanf("%d", &numbers[2]);

    // Print numbers in their original order
    printf("Numbers in original order: %d %d %d\n", numbers[0], numbers[1], numbers[2]);

    // Print numbers in reversed order
    printf("Numbers in reversed order: %d %d %d\n", numbers[2], numbers[1], numbers[0]);

    return 0;
}
