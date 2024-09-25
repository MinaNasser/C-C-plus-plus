#include <stdio.h>

int main() {
    float degree;

    // Ask the user to input the degree
    printf("Enter the student's degree: ");
    scanf("%f", &degree);

    // Check the grade category based on the degree
    if (degree >= 85) {
        printf("Excellent\n");
    } 
    else if (degree >= 75 && degree < 85) {
        printf("Very Good\n");
    } 
    else if (degree >= 65 && degree < 75) {
        printf("Good\n");
    } 
    else if (degree >= 50 && degree < 65) {
        printf("Pass\n");
    } 
    else if (degree < 50) {
        printf("Fail\n");
    }

    return 0;
}
