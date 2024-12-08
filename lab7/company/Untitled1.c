#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

struct Employee{
    int Id ;
    char* name;
    float Salary ;
};
 int Num =0,emm=1;

typedef struct Employee  Employee;



void addEmployee(Employee *e){
    for(int i=0 ;i<emm;i++){
        printf("Welcome To Adding Page  By MinaAl5al \n ");
        printf("Please Enter Employee ID \n");
        scanf("%d",&e[i].Id);
        printf("Please Enter Employee Name \n");
        scanf("%s",&e[i].name);
        printf("Please Enter Employee Salary \n");
        scanf("%f",&e[i].Salary);
    }
    emm++;

}


void VieEmployee(Employee *e){
    printf("Welcome To View  Page  By MinaAl5al \n ");
    for(int i =0 ; i<Num ;i++){
        printf("Employee  %d -  \n\n\n",i+1);
        printf("Employee ID: %d - \n",e[i].Id);
        printf("Employee Name: %s - \n",e[i].name);
        printf("Employee Salary: %.2f - \n\n\n",e[i].Salary);

    }

}

int oprationUser(int op,Employee *emp)
{

    if(op==3)
        return 0 ;

    switch(op)
    {
    case 1:
    {
        addEmployee(emp);
        Num++;
        break;
    }
    case 2:
    {
        VieEmployee(emp);

        break;
    }


    case 3 :
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


    int opration,result;
    printf("How Many Employee you will Save ");
    scanf("%d",&Num);
    Employee emp[Num];

    do
    {
        printf("1 - Add Employee  \n") ;
        printf("2 - Show all Employee \n") ;
        printf("3 - Exit \n") ;
        scanf("%d",&opration);
        result =oprationUser(opration,emp);
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
            }
            else{
                VieEmployee(emp);
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
