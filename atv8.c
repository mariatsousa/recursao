#include <stdio.h>

void decrescente(int n);

int main() {
    int n;

    do {
        printf("Insira um numero positivo: ");
        scanf("%d", &n);
    } while (n < 0);

    decrescente(n);

    return 0;
}

void decrescente(int n) {
    if (n == 0) {
        printf("0 \n");
        return;
    }

    printf("%d \n", n);

    decrescente(n - 1);
}