#include <stdio.h>

int main() {
    int arr[10];
    int i, searchValue, count = 0;

    // Ask the user to enter 10 values
    printf("Enter 10 values:\n");
    for (i = 0; i < 10; i++) {
        printf("Value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Ask the user to enter a value to search for
    printf("Enter a value to search for: ");
    scanf("%d", &searchValue);

    // Apply linear search algorithm
    for (i = 0; i < 10; i++) {
        if (arr[i] == searchValue) {
            count++;
        }
    }

    // Output the result
    if (count > 0) {
        printf("Value Exists %d times\n", count);
    } else {
        printf("Value Not Exist\n");
    }

    return 0;
}
