#include <iostream>
using namespace std;

void DisplayName(char *str) {
    for(int i = 0; str[i] != '\0'; i++) {
        printf("%c", str[i]);
    }
}

int main() {
    printf("Enter Your Name: \n");
    char name[250];
    scanf("%s", name);
    printf("Your Name = ");
    DisplayName(name);
    return 0;
}
