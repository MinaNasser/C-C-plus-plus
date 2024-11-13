#include <iostream>
using namespace std;

int main()
{
    FILE *file = fopen("Output.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    char tt;

    printf("Enter Character you want to write in file:\n");
    scanf(" %c", &tt);

    fputc(tt, file);
    fclose(file);

    printf("Character written to file successfully.\n");

    printf("---------------------------------------\n");
    printf("----------read -------------\n");
    FILE *f = fopen("Output.txt", "r");
    if (f == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    char t = getc(f);
    printf("%c\n", t);
    fclose(f);

    printf("---------------------------------------\n");
    printf("----------Append -------------\n");

    FILE *fi = fopen("append.txt", "a");
    if (fi == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    printf("Enter Character you want to append in file:\n");
    char ch;
    scanf(" %c", &ch);

    fputc(ch, fi);
    fclose(fi);

    printf("Character appended to file successfully.\n");

    return 0;
}

