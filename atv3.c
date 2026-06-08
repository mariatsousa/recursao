#include <stdio.h>

int somaCubos(int n);

int main() {
    int n;

    do {
        printf("Insira um numero positivo: ");
        scanf("%d", &n);
    } while (n <= 0);

    int s = somaCubos(n);

    printf("A soma dos cubos e %d \n", s);

    return 0;
}

int somaCubos(int n) {
    if (n == 1)
        return 1;

    return n * n * n + somaCubos(n - 1);
}