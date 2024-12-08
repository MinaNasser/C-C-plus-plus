#include <iostream>

using namespace std;
int counter =0;
struct hestory{
     char* Operation ;
    float Result;
};
typedef struct hestory  hest;


int oprationUser(int op,hest *h)
{

    if(op==5)
        return 0 ;
    int x,y, re;
      char* operation = "";
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
        operation= "Addition : ";
        h[counter].Operation=operation;
        h[counter].Result =re;
        counter++;
        break;
    }
    case 2:
    {
        re = x-y ;
        printf("Result = %d\n",re);
        operation= "Subsraction";
        h[counter].Operation=operation;
        h[counter].Result =re;
        counter++;
        break;
    }
    case 3:
    {
        re = x*y ;
        printf("Result = %d\n",re);
        operation= "Multiplication";
        h[counter].Operation=operation;
        h[counter].Result =re;
        counter++;
        break;
    }
    case 4:
    {
        if(y!=0)
        {
            re = x/y ;
            printf("Result = %d\n",re);
            operation= "Division";
            h[counter].Operation=operation;
            h[counter].Result =re;
            counter++;
        }
        else
        {
            printf("You Division by Zero \n");
            operation="Division by Zero";
            counter++;
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
        counter++;
        return -1;
    }
    break;

    }
    return 1 ;
}





int main()
{
    hest h[20];
    int opration, result;
    do
    {
        printf("Hint you have %d opration : \n",(15-counter)) ;
        printf("Please chose an opration \n") ;
        printf("1 - Addition  \n") ;
        printf("2 - Subsraction \n") ;
        printf("3 - Multiplication \n") ;
        printf("4 - Division  and Don't Div by Zero \n") ;
        printf("5 - Exit \n") ;
        scanf("%d",&opration);
        result = oprationUser(opration,h);
        if (result == 0)
        {
            printf("Exiting the program.\n");
            break;
        }

        if (result == 1)
        {
            char choice;


            printf("Successful Operation  \n ");
            printf("Do you want print All Result : (y/n): ");
            scanf(" %c", &choice);
            if (choice == 'n' || choice == 'N')
            {
                printf("Enjoy to Anther operation \n");
            }else{
                for (int i=0 ;i<counter;i++){
                    printf("Operation : %s  Result %.2f   \n",h[i].Operation , h[i].Result);
                }
            }


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
