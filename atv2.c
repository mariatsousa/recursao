#include <stdio.h>

int fatorial(int n);

int main() {
    int n;

    do {
        printf("Insira um numero inteiro positivo: ");
        scanf("%d", &n);
    } while (n < 0);

    int f = fatorial(n);

    printf("%d! = %d \n", n, f);

    return 0;
}

int fatorial(int n) {
    if (n == 0)
        return 1;

    return n * fatorial(n - 1);
}