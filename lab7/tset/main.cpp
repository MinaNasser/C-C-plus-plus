#include <stdio.h>

void generate_lucky(long long int current_number, long long int A, long long int B, int *found) {
    if (current_number > B) return;

    if (current_number >= A) {
        printf("%lld ", current_number);
        *found = 1;
    }

    if (current_number * 10 + 4 <= B)
        generate_lucky(current_number * 10 + 4, A, B, found);
    if (current_number * 10 + 7 <= B)
        generate_lucky(current_number * 10 + 7, A, B, found);
}

int main() {
    long long int A, B;
    scanf("%lld %lld", &A, &B);

    int found = 0;

    generate_lucky(4, A, B, &found);
    generate_lucky(7, A, B, &found);

    if (!found) {
        printf("-1");
    }

    return 0;
}



/*#include <stdio.h>
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    int result = gcd(A, B);
    printf("%d\n", result);

    return 0;
}*/
/*#include <stdio.h>

int main() {
    long long int N;
    scanf("%lld", &N);

    int divisors[10000];
    int count = 0;

    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            divisors[count++] = i;
        }
    }

    for (int i = 0; i < count; i++) {
        printf("%d\n", divisors[i]);
    }

    return 0;
}*/
/*#include <stdio.h>
#include <stdbool.h>

int main() {
    int N;
    scanf("%d", &N);
    bool isPrime[N+1];
    for (int i = 0; i <= N; i++) {
        isPrime[i] = true;
    }
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= N; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= N; j += i) {
                isPrime[j] = false;
            }
        }
    }
    for (int i = 2; i <= N; i++) {
        if (isPrime[i]) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}*/
/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char N[8];
    scanf("%s", N);

    int len = strlen(N);
    char reversed[8];
    int j = 0;
    for (int i = len - 1; i >= 0; i--) {
        reversed[j++] = N[i];
    }
    reversed[j] = '\0';

    int reversed_int = atoi(reversed);
    printf("%d\n", reversed_int);

    int isPalindrome = 1;
    for (int i = 0; i < len / 2; i++) {
        if (N[i] != N[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}*/
/*#include <stdio.h>
#include <math.h>
int isPrime(int X) {
    if (X <= 1) {
        return 0;
    }
    if (X == 2) {
        return 1;
    }
    if (X % 2 == 0) {
        return 0;
    }
    for (int i = 3; i * i <= X; i += 2) {
        if (X % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int X;
    scanf("%d", &X);
    if (isPrime(X)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
*/
/*#include <stdio.h>
long long int factorial(int N) {
    long long fact = 1;
    for (int i = 1; i <= N; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int T, N;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%d", &N);
        printf("%lld\n", factorial(N));
    }

    return 0;
}

*/
/*#include <stdio.h>

int main() {
    long long int N;
    scanf("%lld", &N);
    for (int i = 1; i <= 12; i++) {
        printf("%lld * %d = %d\n", N, i, N * i);
    }

    return 0;
}*/
/*
#include <stdio.h>

int main() {
    long int N;
    scanf("%d", &N);

    unsigned int max = 0;
    for (int i = 0; i < N; i++) {
        unsigned int num;
        scanf("%u", &num);

        if (num > max) {
            max = num;
        }
    }

    printf("%u\n", max);
    return 0;
}
*/
/*#include <stdio.h>

int main() {
    int X;

    while (1) {
        scanf("%d", &X);

        if (X == 1999) {
            printf("Correct\n");
            break;
        } else {
            printf("Wrong\n");
        }
    }

    return 0;
}
*/
/*#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int even = 0, odd = 0, positive = 0, negative = 0;
    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num);
        if (num % 2 == 0)
            even++;
        else
            odd++;
        if (num > 0)
            positive++;
        else if (num < 0)
            negative++;
    }

    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);

    return 0;
}
*/
/*#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N < 2) {
        printf("-1\n");
        return 0;
    }

    for (int i = 2; i <= N; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}*/
/*#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main(){
        long long int N=0;
    scanf("%d",&N);
    for(int i=1 ;i<=N;i++){
        printf("%d\n",i);
    }

return 0 ;
}*/












/*
int main(){
    int arr[2][3]={{2,3,4},{5,6,7}};
    int *p= (int *)arr;
    for(int i = 0 ; i<2;i++)
    {
        for(int j=0 ; j<3;j++){
            printf("%d\t",*( (     (int *) *(arr+i)    ) +j));
        }
        printf("\n");
    }
    return 0 ;
}
/** \brief
 *
 * \param
 * \param
 * \return
 *

#define ENTER  13

struct node {
    char value;
    struct node *next;
};

typedef struct node node;

int main(){
    printf("Enter Your Name: \n");
    node* name = NULL;

    while(1){
        char ch = getche();

        if(ch == ENTER){
            break;
        } else {
            node *newNode = (node*)malloc(sizeof(node));
            newNode->value = ch;
            newNode->next = NULL;

            if(name == NULL){
                name = newNode;
            } else {
                node *current = name;
                while(current->next != NULL){
                    current = current->next;
                }
                current->next = newNode;
            }
        }
    }

    printf("\nHello: ");

    node *current2 = name;
    while(current2 != NULL){
        printf("%c", current2->value);
        current2 = current2->next;
    }


    node *current3 = name;
    while(current3 != NULL){
        node *temp = current3;
        current3 = current3->next;
        free(temp);
    }

    return 0;
}
*/
