#include <stdio.h>
int main(){
    int h=0;
    printf("Enter The Hight of pyrqamid  : ");
    scanf("%d", h);
    for (int i = 1; i <=h; i++)
    {
        for (int j = i; j <=i; j++)
        {
            printf("*");

        }
        printf("\n");
    }
    

    return 0 ;
}