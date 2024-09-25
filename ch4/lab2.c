#include <stdio.h>
#include <string.h>

int main() {
    // Predefined ID and password
    const int correctID = 12345;
    const char correctPassword[] = "pass1";
    
    int userID;
    char userPassword[50];
    int attempts = 0;
    int maxAttempts = 3;

    // Ask for the user ID
    printf("Enter your ID: ");
    scanf("%d", &userID);

    // Check if the user ID is correct
    if (userID == correctID) {
        // Give the user up to 3 tries to enter the correct password
        while (attempts < maxAttempts) {
            printf("Enter your password: ");
            scanf("%s", userPassword);  // Read the password

            // Check if the password is correct
            if (strcmp(userPassword, correctPassword) == 0) {
                printf("Welcome!\n");
                return 0;  // Exit the program if the login is successful
            } else {
                attempts++;
                if (attempts < maxAttempts) {
                    printf("Incorrect password. Try again.\n");
                }
            }
        }

        // If 3 attempts are used, print no more tries
        printf("No more tries.\n");
    } else {
        // If the ID is incorrect
        printf("You are not registered.\n");
    }

    return 0;
}
