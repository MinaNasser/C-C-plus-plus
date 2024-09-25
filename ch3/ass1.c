#include <stdio.h>

int main() {
    int numbers[10];  // مصفوفة لتخزين 10 أرقام
    int search_number, found = 0;  // المتغير لتخزين الرقم المطلوب البحث عنه وعلم وجوده

    // استقبال 10 أرقام من المستخدم
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // استقبال الرقم الذي نبحث عنه
    printf("Enter the number to search for: ");
    scanf("%d", &search_number);

    // البحث عن الرقم في المصفوفة
    for (int i = 0; i < 10; i++) {
        if (numbers[i] == search_number) {
            printf("Number %d found at position %d.\n", search_number, i + 1);
            found = 1;  // تم العثور على الرقم
            break;
        }
    }

    // إذا لم يتم العثور على الرقم
    if (!found) {
        printf("Number %d not found in the array.\n", search_number);
    }

    return 0;
}
