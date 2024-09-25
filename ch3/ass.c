#include <stdio.h>
#include <string.h>  // لإجراء عمليات مقارنة النصوص

int main() {
    int id;
    char password[20];  // مصفوفة لتخزين كلمة المرور

    // طلب إدخال رقم الـ ID من المستخدم
    printf("Enter an ID number (1-7): ");
    scanf("%d", &id);

    // طلب إدخال كلمة المرور
    printf("Enter the password: ");
    scanf("%s", password);  // يستخدم %s لتخزين كلمة المرور كنص

    // استخدام switch case لطباعة الاسم بناءً على الـ ID بعد التحقق من كلمة المرور
    switch (id) {
        case 1:
            if (strcmp(password, "pass1") == 0) {  // التحقق من كلمة المرور لـ ID 1
                printf("Mina\n");
            } else {
                printf("Incorrect password.\n");
            }
            break;
        case 2:
            if (strcmp(password, "pass2") == 0) {  // التحقق من كلمة المرور لـ ID 2
                printf("Ahmed\n");
            } else {
                printf("Incorrect password.\n");
            }
            break;
        case 3:
            if (strcmp(password, "pass3") == 0) {  // التحقق من كلمة المرور لـ ID 3
                printf("Ali\n");
            } else {
                printf("Incorrect password.\n");
            }
            break;
        case 4:
            if (strcmp(password, "pass4") == 0) {  // التحقق من كلمة المرور لـ ID 4
                printf("Sara\n");
            } else {
                printf("Incorrect password.\n");
            }
            break;
        case 5:
            if (strcmp(password, "pass5") == 0) {  // التحقق من كلمة المرور لـ ID 5
                printf("Laila\n");
            } else {
                printf("Incorrect password.\n");
            }
            break;
        case 6:
            if (strcmp(password, "pass6") == 0) {  // التحقق من كلمة المرور لـ ID 6
                printf("Omar\n");
            } else {
                printf("Incorrect password.\n");
            }
            break;
        case 7:
            if (strcmp(password, "pass7") == 0) {  // التحقق من كلمة المرور لـ ID 7
                printf("Nora\n");
            } else {
                printf("Incorrect password.\n");
            }
            break;
        default:
            printf("Invalid ID\n");
            break;
    }

    return 0;
}
