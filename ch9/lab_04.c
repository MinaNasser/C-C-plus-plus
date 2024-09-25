#include <stdio.h>

struct Original {
    int b;        // 4 bytes
    char a;       // 1 byte
    char c;       // 1 byte
    
};

int main() {
    printf("Size of Original struct: %zu bytes\n", sizeof(struct Original));
    return 0;
}
