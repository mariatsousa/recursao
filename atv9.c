#include <stdio.h>

void paresCrescente(int n);

int main() {
    int n;

    do {
        printf("Insira um numero par positivo: ");
        scanf("%d", &n);
    } while (n < 0 || n % 2 != 0);

    paresCrescente(n);

    return 0;
}

void paresCrescente(int n) {
    if (n == 0) {
        printf("0 ");
        return;
    }

    paresCrescente(n - 2);

    printf("%d ", n);
}