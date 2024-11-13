#include <stdio.h>

void swapTowNumber(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int num1 , num2 ;
    printf("enter First Number : \n");
    scanf("%d",&num1);
    printf("enter Second  Number : \n");
    scanf("%d",&num2);

    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);


    swapTowNumber(&num1, &num2);

    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

