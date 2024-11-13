#include <iostream>

using namespace std;

int main()
{
    int num;
    int keepRanning =1;
    for(;keepRanning;) {
        printf("Please enter an even number: \n");
        scanf("%d", &num);

        if (num % 2 == 0) {
            keepRanning =0 ;
            printf("thank  You for  entered an Even number\n");
        } else {
            printf("You entered an odd number. Please try again.\n");
        }
    }

    return 0;
}
