#include <stdio.h>

int main() {
    // Variable declarations
    char name[50]="";
    int birthDay=0, birthMonth=0, birthYear=0;
    char college[50];
    int graduationYear=0;

    // Asking the user for input
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin); // Get the full name

    // Asking for day, month, and year of birth
    printf("Enter your date of birth (day - month - year):\n");
    printf("Day: ");
    scanf("%d", &birthDay);
    printf("Month: ");
    scanf("%d", &birthMonth);
    printf("Year: ");
    scanf("%d", &birthYear);

    // Asking for college name and graduation year
    printf("Enter your college name: ");
    scanf("%s", college);

    printf("Enter your graduation year: ");
    scanf("%d", &graduationYear);

    // Printing the entered data
    printf("\n\nYour Information:\n");
    printf("Full Name: %s", name);
    printf("Date of Birth: %02d/%02d/%d\n", birthDay, birthMonth, birthYear);
    printf("College: %s\n", college);
    printf("Graduation Year: %d\n", graduationYear);

    return 0;
}
