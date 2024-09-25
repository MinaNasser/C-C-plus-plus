#include <stdio.h>
int main(){
    int num[10];
    int sum = 0;
    float av = 0.0;
    
    printf("Enter the 10 Numbers \n");
    for (size_t i = 0; i < 10; i++) {
        printf("Number %zu : ", i+1);  // %zu for size_t type
        scanf("%d", &num[i]);  // &num[i] to store the input at the correct address
        sum += num[i];
    }
    
    av = sum / 10.0;  // Make sure to divide by 10.0 to get a float result
    
    printf("The sum of 10 numbers is : %d\n", sum);  // Correctly print the sum
    printf("The Average is : %.2f\n", av);  // Display the average with 2 decimal places
    
    return 0;
}
