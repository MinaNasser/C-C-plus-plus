#include <stdio.h>
#include <conio.h>

int main() {
    char ch;

    printf("Enter a character using getch(): ");
    ch = getch();//getch(): ���� ����� ������ �� ���� �������� ���� ���� ��� ������.
    printf("\nYou entered (hidden): %c\n", ch);
    printf("Enter a character using getche(): ");
    ch = getche();//getche(): ���� ����� ������ �� ���� �������� ������ ��� ������.
    printf("\nYou entered (shown): %c\n", ch);

    return 0;
}
