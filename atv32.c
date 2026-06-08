#include <stdio.h>

void binario(int n);

int main() {
    int n;

    do {
        printf("Insira um numero positivo: ");
        scanf("%d", &n);
    } while (n < 0);

    binario(n);

    return 0;
}

void binario(int n) {
    if (n < 2) {
        printf("%d", n);
        return;
    }

    binario(n / 2);

    printf("%d", n % 2);
}