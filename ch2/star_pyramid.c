#include <stdio.h>

int main() {
    int height;

    // إدخال ارتفاع الهرم من قبل المستخدم
    printf("Enter hight of  star pyramid ");
    scanf("%d", &height);

    // حلقة لرسم الهرم
    for (int i = 1; i <= height; i++) {
        // طباعة المسافات
        for (int j = i; j < height; j++) {
            printf(" ");
        }
        // طباعة النجوم
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        // الانتقال إلى السطر التالي
        printf("\n");
    }

    return 0;
}
