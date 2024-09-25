#include <stdio.h>

int main() {
    float hour_rate = 50.0;  // Hourly rate
    float working_hours, salary;

    // Ask user to input working hours
    printf("Enter the number of working hours: ");
    scanf("%f", &working_hours);

    // Calculate salary
    if (working_hours < 40) {
        salary = working_hours * hour_rate;
        // Apply 10% deduction if hours worked are less than 40
        salary = salary - (salary * 0.10);
    } else {
        salary = working_hours * hour_rate;
    }

    // Print the calculated salary
    printf("The calculated salary is: %.2f\n", salary);

    return 0;
}
