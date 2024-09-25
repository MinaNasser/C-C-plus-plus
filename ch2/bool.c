#include <stdio.h>
#include <stdbool.h>

int main() {
    int x = 10;
    int y = 15;

    // Perform comparison operations
    bool isEqual = (x == y);
    bool isNotEqual = (x != y);
    bool isGreater = (x > y);
    bool isLess = (x < y);
    bool isGreaterOrEqual = (x >= y);
    bool isLessOrEqual = (x <= y);

    // Print results of comparisons
    printf("x == y: %d\n", isEqual);
    printf("x != y: %d\n", isNotEqual);
    printf("x > y: %d\n", isGreater);
    printf("x < y: %d\n", isLess);
    printf("x >= y: %d\n", isGreaterOrEqual);
    printf("x <= y: %d\n", isLessOrEqual);

    return 0;
}
