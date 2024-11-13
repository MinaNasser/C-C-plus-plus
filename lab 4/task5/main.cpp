#include <iostream>

using namespace std;

int main()
{
    int num ;
    printf("Enter Number:  \n");
    scanf("%d",&num);
    (num%2==0)
    ? printf("Even")
    :(num>10)
    ?printf("Odd & Biger than 10  ")
    :printf("Odd & Leas than 10  ");
    return 0;

}
