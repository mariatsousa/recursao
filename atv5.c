#include <stdio.h>

int fibonacci(int n);

int main() {
    int n;

    do {
        printf("Insira a posicao: ");
        scanf("%d", &n);
    } while (n < 0);

    int f = fibonacci(n);

    printf("F(%d) = %d \n", n, f);

    return 0;
}

int fibonacci(int n) {
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}