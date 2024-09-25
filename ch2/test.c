#include <stdio.h>

void printBinary(int num) {
    // حجم المتغير int في C هو 32 بت، لذلك نبدأ من البت الأعلى إلى الأقل
    for (int i = 7; i >= 0; i--) {
        int bit = (num >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

int main() {
    int X = 7;
    int Y = 4;

    printf("X & Y = ");
    printBinary(X & Y);

    printf("X | Y = ");
    printBinary(X | Y);

    printf("X ^ Y = ");
    printBinary(X ^ Y);

    printf("X >> 1 = ");
    printBinary(X >> 1);

    printf("Y << 2 = ");
    printBinary(Y << 2);

    return 0;
}
