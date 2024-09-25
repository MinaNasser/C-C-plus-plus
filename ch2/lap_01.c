#include <stdio.h>

int main() {
    // تعريف المتغير
    int A, B;

    // طلب إدخال القيمة من المستخدم
    printf("Please Enter Number 1: ");
    scanf("%d", &A);
// طلب إدخال القيمة من المستخدم
    printf("Please Enter the Number 2 ");
    scanf("%d", &B);

    // طباعة القيمة المدخلة
    printf("A + B = %d\n", A+B);
    printf("A * B = %d\n", A*B);

    return 0;
}
