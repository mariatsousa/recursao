#include <stdio.h>

int F(int n);

int main() {
    int n;

    do {
        printf("Insira n: ");
        scanf("%d", &n);
    } while (n <= 0);

    printf("F(%d) = %d", n, F(n));

    return 0;
}

int F(int n) {
    if (n == 1)
        return 1;

    if (n == 2)
        return 2;

    return 2 * F(n - 1) + 3 * F(n - 2);
}