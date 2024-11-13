#include <iostream>
#include <cstdio>
#include <ctime>
using namespace std;

void logs(int num1,int num2, int result, const char* opration)
{
    FILE * f = fopen("logs.txt","a");
    if(f ==NULL)
    {
        printf("WE can't open File \n");
        return ;
    }
    time_t t =time(NULL);
    struct tm *tm= localtime(&t);
    fprintf(f,"%s : %d and %d  = %d  AT ::  %s  :: \n",opration, num1,num2,result,asctime(tm));
    fclose(f);
}

int oprationUser(int op)
{
    if(op==5)
        return 0 ;
    int x,y, re;
    const char* operation = "";
    printf("Enter 1st Number : \n");
    scanf("%d",&x);
    printf("Enter 2d Number : \n");
    scanf("%d",&y);

    switch(op)
    {
    case 1:
    {
        re = x+y ;
        printf("Result = %d\n",re);
        operation= "Addition";
        break;
    }
    case 2:
    {
        re = x-y ;
        printf("Result = %d\n",re);
        operation= "Subsraction";
        break;
    }
    case 3:
    {
        re = x*y ;
        printf("Result = %d\n",re);
        operation= "Multiplication";
        break;
    }
    case 4:
    {
        if(y!=0)
        {
            re = x/y ;
            printf("Result = %d\n",re);
            operation= "Division";
        }
        else
        {
            printf("You Division by Zero \n");
            operation="Division by Zero";
            return -1;

        }
        break;
    }
    case 5 :
    {
        operation= "Exit!";
        return 0;
    }

    break;
    default:
    {
        printf("Invalid operation. Please try again.\n");
        return -1;
    }
    break;

    }
    logs(x,y,re,operation);


    return 1 ;
}


int main()
{
    int opration, result;
    do
    {
        printf("Please chose an opration \n") ;
        printf("1 - Addition  \n") ;
        printf("2 - Subsraction \n") ;
        printf("3 - Multiplication \n") ;
        printf("4 - Division  and Don't Div by Zero \n") ;
        printf("5 - Exit \n") ;
        scanf("%d",&opration);
        result = oprationUser(opration);
        if (result == 0)
        {
            printf("Exiting the program.\n");
            break;
        }

        if (result == 1)
        {
            char choice;
            printf("Successful Operation  \n ");
            printf("Do you want to perform another operation? (y/n): ");
            scanf(" %c", &choice);

            if (choice == 'n' || choice == 'N')
            {
                printf("Exiting the program.\n");
                break;
            }
        }





    }
    while(true);
    return 0;
}

/*

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
*/



/*
int opraUseropration(int opra)
{
    if (opra == 4) {
        return 0;
    }

    int num1, num2, result;
    const char* operation = "";
    printf("Enter First Number: ");
    scanf("%d", &num1);
    printf("Enter Second Number: ");
    scanf("%d", &num2);

    switch(opra)
    {
        case 1:
            result = num1 + num2;
            operation = "Addition";
            printf("Result: %d\n", result);
            break;
        case 2:
            result = num1 - num2;
            operation = "Subtraction";
            printf("Result: %d\n", result);
            break;
        case 3:
            result = num1 * num2;
            operation = "Multiplication";
            printf("Result: %d\n", result);
            break;
        case 4:
            return 0;
        default:
            printf("Invalid operation. Please try again.\n");
            return -1;
    }
    writeResultToFile(num1, num2, result, operation);

    return 1;
}


*/
/*

void writeResultToFile(int num1, int num2, int result, const char* operation)
{

    FILE *file = fopen("log.txt", "a");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    time_t t = time(NULL);
    struct tm *tm = localtime(&t);

    fprintf(file, "%s => Result: %d and %d = %d  at %s\n", operation, num1, num2, result,asctime(tm));
    fclose(file);
}
*/
