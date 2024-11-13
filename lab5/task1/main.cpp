#include <iostream>

using namespace std;

int main()
{
    int num ;
    scanf("%d",&num);
    switch (num<3)
    {
        case 1 :
            printf("Even \n");
        break;

        case 0 :
            printf("Odd\n");
        break;

    }
    return 0;
}
