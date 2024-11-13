#include <iostream>

using namespace std;


void getTowChar(char *x , char *y)
{
    printf("Enter 1st char Please : ");
    *x = getchar();getchar();
    printf("Enter 2nd char Please : ");
    *y = getchar();



}


int main()
{
    char x,y ;
    getTowChar(&x ,&y );
    printf("First char :   %c  %t  Second char :   %c  ",x,y);
    return 0;
}
