#include <stdio.h>

int fibg(int f0, int f1, int n);

int main() {
    int f0, f1, n;

    printf("Insira f0: ");
    scanf("%d", &f0);

    printf("Insira f1: ");
    scanf("%d", &f1);

    do {
        printf("Insira n: ");
        scanf("%d", &n);
    } while (n < 0);

    printf("%d", fibg(f0, f1, n));

    return 0;
}

int fibg(int f0, int f1, int n) {
    if (n == 0)
        return f0;

    if (n == 1)
        return f1;

    return fibg(f0, f1, n - 1) + fibg(f0, f1, n - 2);
}