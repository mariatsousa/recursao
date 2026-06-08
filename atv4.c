#include <stdio.h>

int potencia(int k, int n);

int main() {
    int k, n;

    printf("Insira a base: ");
    scanf("%d", &k);

    do {
        printf("Insira o expoente: ");
        scanf("%d", &n);
    } while (n < 0);

    int p = potencia(k, n);

    printf("%d^%d = %d \n", k, n, p);

    return 0;
}

int potencia(int k, int n) {
    if (n == 0)
        return 1;

    return k * potencia(k, n - 1);
}