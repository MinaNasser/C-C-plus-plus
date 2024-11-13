#include <iostream>

using namespace std;

int opraUseropration(int opra)
{
    if (opra == 4) {
        return 0;
    }
    int num1, num2, result;

    printf("Enter First Number: ");
    scanf("%d", &num1);
    printf("Enter Second Number: ");
    scanf("%d", &num2);

    switch(opra)
    {
        case 1:
            result = num1 + num2;
            printf("Result: %d\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result: %d\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result: %d\n", result);
            break;
        case 4:
            return 0;
        default:
            printf("Invalid operation. Please try again.\n");
            return -1;
    }
    return 1;
}

int main()
{
    int operation;
    int result;

    while (true)
    {
        printf("Please choose an operation: \n");
        printf("1 - Add \n");
        printf("2 - Subtract \n");
        printf("3 - Multiply \n");
        printf("4 - Exit\n");


        scanf("%d", &operation);

        result = opraUseropration(operation);


        if (result == 0)
        {
            printf("Exiting the program.\n");
            break;
        }

        if (result == 1)
        {
            char choice;
            printf("Do you want to perform another operation? (y/n): ");
            scanf(" %c", &choice);

            if (choice == 'n' || choice == 'N')
            {
                printf("Exiting the program.\n");
                break;
            }
        }
    }

    return 0;
}

