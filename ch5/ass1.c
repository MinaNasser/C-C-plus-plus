#include <stdio.h>

// Function prototypes for calculator operations
void add();
void subtract();
void multiply();
void divide();
void square();
void bitwiseAND();
void bitwiseOR();
void bitwiseXOR();
void remainder1();
void increment();
void decrement();

int main() {
    int operationID;

    // Display the menu
    printf("Simple Calculator\n");
    printf("Choose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Square\n");
    printf("6. Bitwise AND\n");
    printf("7. Bitwise OR\n");
    printf("8. Bitwise XOR\n");
    printf("9. Remainder\n");
    printf("10. Increment\n");
    printf("11. Decrement\n");
    printf("Enter operation ID (1-11): ");
    scanf("%d", &operationID);

    // Perform the operation based on the user's choice
    switch (operationID) {
        case 1: add(); break;
        case 2: subtract(); break;
        case 3: multiply(); break;
        case 4: divide(); break;
        case 5: square(); break;
        case 6: bitwiseAND(); break;
        case 7: bitwiseOR(); break;
        case 8: bitwiseXOR(); break;
        case 9: remainder1(); break;
        case 10: increment(); break;
        case 11: decrement(); break;
        default: printf("Invalid operation ID.\n");
    }

    return 0;
}

// Function for addition
void add() {
    float a, b;
    printf("Enter two operands: ");
    scanf("%f %f", &a, &b);
    printf("Result: %.2f\n", a + b);
}

// Function for subtraction
void subtract() {
    float a, b;
    printf("Enter two operands: ");
    scanf("%f %f", &a, &b);
    printf("Result: %.2f\n", a - b);
}

// Function for multiplication
void multiply() {
    float a, b;
    printf("Enter two operands: ");
    scanf("%f %f", &a, &b);
    printf("Result: %.2f\n", a * b);
}

// Function for division
void divide() {
    float a, b;
    printf("Enter two operands: ");
    scanf("%f %f", &a, &b);
    if (b != 0) {
        printf("Result: %.2f\n", a / b);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}

// Function for squaring a number
void square() {
    float a;
    printf("Enter one operand: ");
    scanf("%f", &a);
    printf("Result: %.2f\n", a * a);
}

// Function for bitwise AND
void bitwiseAND() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Result: %d\n", a & b);
}

// Function for bitwise OR
void bitwiseOR() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Result: %d\n", a | b);
}

// Function for bitwise XOR
void bitwiseXOR() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Result: %d\n", a ^ b);
}

// Function for remainder
void remainder1() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    if (b != 0) {
        printf("Result: %d\n", a % b);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}

// Function for increment
void increment() {
    int a;
    printf("Enter an integer: ");
    scanf("%d", &a);
    printf("Result after incrementing: %d\n", ++a);
}

// Function for decrement
void decrement() {
    int a;
    printf("Enter an integer: ");
    scanf("%d", &a);
    printf("Result after decrementing: %d\n", --a);
}
