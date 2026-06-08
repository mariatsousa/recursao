#include <stdio.h>

void crescente(int n);

int main() {
    int n;

    do {
        printf("Insira um numero positivo: ");
        scanf("%d", &n);
    } while (n < 0);

    crescente(n);

    return 0;
}

void crescente(int n) {
    if (n == 0) {
        printf("0 \n");
        return;
    }

    crescente(n - 1);

    printf("%d \n", n);
}