#include <stdio.h>

int fatorialDuplo(int n);

int main() {
    int n;

    do {
        printf("Insira um numero impar positivo: ");
        scanf("%d", &n);
    } while (n <= 0 || n % 2 == 0);

    int f = fatorialDuplo(n);

    printf("%d!! = %d", n, f);

    return 0;
}

int fatorialDuplo(int n) {
    if (n == 1)
        return 1;

    return n * fatorialDuplo(n - 2);
}