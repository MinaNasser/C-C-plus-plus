#include <stdio.h>

int main() {
    int a, b;

    // Read two integers from the user
    printf("Enter the first number (a): ");
    scanf("%d", &a);
    printf("Enter the second number (b): ");
    scanf("%d", &b);

    // Perform and print the operations
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n", a ^ b);

    return 0;
}
