#include <stdio.h>
#include <conio.h>

int main() {
    char ch;

    printf("Enter a character using getch(): ");
    ch = getch();//getch(): ÊŞÑÃ ÍÑİğÇ æÇÍÏğÇ ãä áæÍÉ ÇáãİÇÊíÍ ÈÏæä ÚÑÖå Úáì ÇáÔÇÔÉ.
    printf("\nYou entered (hidden): %c\n", ch);
    printf("Enter a character using getche(): ");
    ch = getche();//getche(): ÊŞÑÃ ÍÑİğÇ æÇÍÏğÇ ãä áæÍÉ ÇáãİÇÊíÍ æÊÚÑÖå Úáì ÇáÔÇÔÉ.
    printf("\nYou entered (shown): %c\n", ch);

    return 0;
}
