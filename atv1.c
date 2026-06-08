#include <stdio.h>

int somatorio(int n);

int main() {
    int n;

    do {
        printf("Insira um numero positivo: ");
        scanf("%d", &n);
    } while (n <= 0);

    int s = somatorio(n);

    printf("O somatorio de 1 a %d e %d \n", n, s);

    return 0;
}

int somatorio(int n) {
    if (n == 1)
        return 1;

    return n + somatorio(n - 1);
}