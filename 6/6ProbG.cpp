#include <stdio.h>
#include <string.h>

void fib(int n, char a, char b, char result[]) {
    if (n == 0) {
        result[0] = a;
        result[1] = '\0';
        return;
    }
    if (n == 1) {
        result[0] = b;
        result[1] = '\0';
        return;
    }

    char left[2000];
    char right[2000];

    fib(n - 1, a, b, left);
    fib(n - 2, a, b, right);

    strcpy(result, left);
    strcat(result, right);
}

int main() {
    int TC;
    scanf("%d", &TC);

    for (int tc = 1; tc <= TC; tc++) {
        int N;
        char a, b;

        scanf("%d %c %c", &N, &a, &b);

        char result[2000];
        fib(N, a, b, result);

        printf("Case #%d: %s\n", tc, result);
    }

    return 0;
}

