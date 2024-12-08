#include <iostream>
#include <cstdio>
#include <ctime>


using namespace std;
int counter =0;

int oprationUser(int op, int * arr)
{
    if(op==5)
        return 0 ;
    int x,y, re ;
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
        arr[counter]=re;
        counter++;

        break;
    }
    case 2:
    {
        re = x-y ;
        printf("Result = %d\n",re);
        arr[counter]=re;
        counter++;
        break;
    }
    case 3:
    {
        re = x*y ;
        printf("Result = %d\n",re);
        arr[counter]=re;
        counter++;
        break;
    }
    case 4:
    {
        if(y!=0)
        {
            re = x/y ;
            printf("Result = %d\n",re);
            arr[counter]=re;
            counter++;
        }
        else
        {
            printf("You Division by Zero \n");
            return -1;
        }
        break;
    }
    case 5 :
    {
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
    return 1 ;
}


int main()
{
    int result,opration;
    int arr[15];

    do
    {
        printf("You have only %d ", (15-counter));
        printf("Please chose an opration \n") ;
        printf("1 - Addition  \n") ;
        printf("2 - Subsraction \n") ;
        printf("3 - Multiplication \n") ;
        printf("4 - Division  and Don't Div by Zero \n") ;
        printf("5 - Exit \n") ;
        scanf("%d",&opration);
        result = oprationUser(opration,arr);

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
                    printf("Result %d =%d  \n",(i+1),arr[i]);
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
