#include <iostream>

using namespace std;

int main()
{
    FILE *f = fopen("file.txt","r");
    char t = getc(f);
    printf("%c\n",t);
    fclose(f);
    return 0;
}
/*
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main() {

    int file = open("input.txt", O_RDONLY);
    if (file < 0) {
        perror("Error opening file");
        return 1;
    }

    char ch;
    ssize_t bytes_read = read(file, &ch, 1);
    if (bytes_read > 0) {
        printf("The first character read from the file is: %c\n", ch);
    } else {
        printf("The file is empty or an error occurred.\n");
    }
    close(file);
    return 0;
}




*/
