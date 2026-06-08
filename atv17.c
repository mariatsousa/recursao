#include <stdio.h>

int fatorialQuadruplo(int n);

int main() {
    int n;

    do {
        printf("Insira um numero positivo: ");
        scanf("%d", &n);
    } while (n <= 0);

    int f = fatorialQuadruplo(n);

    printf("%d!!!! = %d", n, f);

    return 0;
}

int fatorialQuadruplo(int n) {
    if (n <= 4)
        return n;

    return n * fatorialQuadruplo(n - 4);
}