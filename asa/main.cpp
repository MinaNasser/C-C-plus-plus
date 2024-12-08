/*#include <stdio.h>
#include <stdbool.h>

bool isLucky(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit != 4 && digit != 7) {
            return false;
        }
        num /= 10;
    }
    return true;
}

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    bool found = false;
    for (int i = A; i <= B; i++) {
        if (isLucky(i)) {
            if (found) {
                printf(" ");
            }
            printf("%d", i);
            found = true;
        }
    }

    if (!found) {
        printf("-1");
    }

    printf("\n");

    return 0;
}*/

/*

#include <stdio.h>

int main() {
    char S;
    int N;
    int numbers[50];
    scanf(" %c", &S);
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < numbers[i]; j++) {
            printf("%c", S);
        }
        printf("\n");
    }

    return 0;
}
*/

/*
#include <stdio.h>

int main() {
    int N;

    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
        }
    return 0;
}
*/
/*

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = N; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
*/



/*
#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        unsigned int N;
        scanf("%u", &N);
        if (N == 0) {
            printf("0\n");
            continue;
        }

        while (N > 0) {
            printf("%d", N % 10);
            N /= 10;
            if (N > 0) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}*/


/*
#include <stdio.h>

int main() {
    int N, M;

    while (1) {
        scanf("%d %d", &N, &M);

        if (N <= 0 || M <= 0) {
            break;
        }
        if (N > M) {
            int temp = N;
            N = M;
            M = temp;
        }

        int sum = 0;

        for (int i = N; i <= M; i++) {
            printf("%d ", i);
            sum += i;
        }

        printf("sum =%d\n", sum);
    }

    return 0;
}*/
/*
#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);

        if (X > Y) {
            int temp = X;
            X = Y;
            Y = temp;
        }

        int sum = 0;
        for (int i = X + 1; i < Y; i++) {
            if (i % 2 != 0) {
                sum += i;
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}
*/
/*
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
       for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}*/

/*
#include <stdio.h>
int sum_of_digits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int N, A, B;
    scanf("%d %d %d", &N, &A, &B);

    int total_sum = 0;

    for (int i = 1; i <= N; i++) {
        int digit_sum = sum_of_digits(i);
        if (digit_sum >= A && digit_sum <= B) {
            total_sum += i;
        }
    }

    printf("%d\n", total_sum);
    return 0;
}
*/
/*
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        int start = 1 + i * 4;
        printf("%d %d %d PUM\n", start, start + 1, start + 2);
    }

    return 0;
}

*/

/*
#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int count_ones = 0;
        int temp = N;

        while (temp > 0) {
            if (temp % 2 == 1) {
                count_ones++;
            }
            temp /= 2;
        }

        int result = (1 << count_ones) - 1;

        printf("%d\n", result);
    }

    return 0;
}
*/
/*
#include <stdio.h>

int fib_cache[46];

int fib(int n) {
    if (n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    }

    if (fib_cache[n] != -1) {
        return fib_cache[n];
    }
    fib_cache[n] = fib(n - 1) + fib(n - 2);
    return fib_cache[n];
}

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i <= 45; i++) {
        fib_cache[i] = -1;
    }

    for (int i = 1; i <= N; i++) {
        if (i > 1) {
            printf(" ");
        }
        printf("%d", fib(i));
    }
    printf("\n");
    return 0;
}*/

#include <stdio.h>

int check_equation(int a, int b, int c, int d) {

    if (a + b + c == d) return 1;
    if (a + b - c == d) return 1;
    if (a + b * c == d) return 1;
    if (a - b + c == d) return 1;
    if (a - b - c == d) return 1;
    if (a - b * c == d) return 1;
    if (a * b + c == d) return 1;
    if (a * b - c == d) return 1;
    if (a * b * c == d) return 1;

    return 0;
}

int main() {
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (check_equation(a, b, c, d)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

