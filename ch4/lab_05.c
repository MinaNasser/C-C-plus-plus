#include <stdio.h>

int main() {
    int number, i = 1;

    // Ask the user for input
    printf("Enter a number to display its multiplication table: ");
    scanf("%d", &number);

    // Using while loop to display the multiplication table
    while (i <= 10) {
        printf("%d x %d = %d\n", number, i, number * i);
        i++;
    }

    return 0;
}
