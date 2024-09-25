#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_CLASSES 3
#define NUM_STUDENTS 10

int main() {
    int class1[NUM_STUDENTS], class2[NUM_STUDENTS], class3[NUM_STUDENTS];
    int i, j, sum = 0, highest = 0, lowest = 100;
    float average;

    // Initialize random number generator
    srand(time(0));

    // Fill arrays with random grades (between 0 and 100)
    for (i = 0; i < NUM_STUDENTS; i++) {
        class1[i] = rand() % 101;
        class2[i] = rand() % 101;
        class3[i] = rand() % 101;
    }

    // Calculate total sum and find highest and lowest grade
    for (i = 0; i < NUM_STUDENTS; i++) {
        sum += class1[i] + class2[i] + class3[i];

        if (class1[i] > highest) highest = class1[i];
        if (class2[i] > highest) highest = class2[i];
        if (class3[i] > highest) highest = class3[i];

        if (class1[i] < lowest) lowest = class1[i];
        if (class2[i] < lowest) lowest = class2[i];
        if (class3[i] < lowest) lowest = class3[i];
    }

    // Calculate average grade
    average = sum / (float)(NUM_CLASSES * NUM_STUDENTS);

    // Display results
    printf("Total sum of grades: %d\n", sum);
    printf("Average grade: %.2f\n", average);
    printf("Highest grade: %d\n", highest);
    printf("Lowest grade: %d\n", lowest);

    return 0;
}
