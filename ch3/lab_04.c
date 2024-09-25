#include <stdio.h>

int main() {
    int id;

    // Ask the user to input an ID number
    printf("Enter an ID number (1-7): ");
    scanf("%d", &id);

    // Use a switch case to print the name based on the entered ID
    switch (id) {
        case 1:
            printf("Mina\n");
            break;
        case 2:
            printf("Ahmed\n");
            break;
        case 3:
            printf("Ali\n");
            break;
        case 4:
            printf("Sara\n");
            break;
        case 5:
            printf("Laila\n");
            break;
        case 6:
            printf("Omar\n");
            break;
        case 7:
            printf("Nora\n");
            break;
        default:
            printf("Invalid ID\n");
            break;
    }

    return 0;
}
