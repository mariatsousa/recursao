#include <stdio.h>

void imprimeSerie(int i, int j, int k);

int main() {
    int i, j, k;

    printf("Insira i: ");
    scanf("%d", &i);

    printf("Insira j: ");
    scanf("%d", &j);

    printf("Insira k: ");
    scanf("%d", &k);

    imprimeSerie(i, j, k);

    return 0;
}

void imprimeSerie(int i, int j, int k) {
    if (i > j)
        return;

    printf("%d ", i);

    imprimeSerie(i + k, j, k);
}