#include <stdio.h>

// Function to swap the values of global variables
int  fact(int n);

int main() {
    printf("%d", fact(7));
    return 0;
}

int  fact(int n){
    if (n==0||n==1)
    {
        return 1;
    }
    return n*fact(n-1);
    
}