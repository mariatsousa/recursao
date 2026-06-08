#include <stdio.h>

void paresDecrescente(int n);

int main() {
    int n;

    do {
        printf("Insira um numero par positivo: ");
        scanf("%d", &n);
    } while (n < 0 || n % 2 != 0);

    paresDecrescente(n);

    return 0;
}

void paresDecrescente(int n) {
    if (n == 0) {
        printf("0 ");
        return;
    }

    printf("%d ", n);

    paresDecrescente(n - 2);
}