#include <stdio.h>

int main() {
    int answer = 0;

    // Loop until the user enters the correct answer
    while (answer != 12) {
        printf("What is the result of 3 * 4? ");
        scanf("%d", &answer);

        if (answer == 12) {
            printf("Thanks!\n");
        } else {
            printf("Try again.\n");
        }
    }

    return 0;
}
