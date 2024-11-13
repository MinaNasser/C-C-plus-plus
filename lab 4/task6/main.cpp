
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main() {

    FILE *file = fopen("input.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    char ch = getc(file);
    printf("%c\n", ch);
    fclose(file);
    (ch ==  'M' )?printf("Connection success"):printf("Error");
    fclose(file);
    return 0;
}
