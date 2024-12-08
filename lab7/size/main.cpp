#include <iostream>

using namespace std;
struct Emplooyee {
    int Id ;
    char name [250];
    float Salary ;
};
typedef struct Emplooyee emp;
#define emmm struct Emplooyee
using empl = struct Emplooyee;
int main()
{
    emp e ;
    empl e2;
    printf("Size Of Int = %d\n ",sizeof(int));
    printf("Size Of Int = %d \n\n",sizeof(float));
    printf("Size Of e.id = %d \n",sizeof(e.Id));
    printf("Size Of e.salary = %d \n",sizeof(e.Salary));
    printf("Size Of e.name = %d \n",sizeof(e.name));

    printf("Size Of struct Emplooyee = %d \n",sizeof(e));
    printf("Size Of struct Emplooyee 2 = %d \n",sizeof(e2));
    printf("Size Of struct Emplooyee 3 = %d \n",sizeof(emmm));
    return 0;
}
