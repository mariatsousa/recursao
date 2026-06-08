#include <stdio.h>

int somaSerie(int i, int j, int k);

int main() {
    int i, j, k;

    printf("Insira i: ");
    scanf("%d", &i);

    printf("Insira j: ");
    scanf("%d", &j);

    printf("Insira k: ");
    scanf("%d", &k);

    int s = somaSerie(i, j, k);

    printf("Soma = %d", s);

    return 0;
}

int somaSerie(int i, int j, int k) {
    if (i > j)
        return 0;

    return i + somaSerie(i + k, j, k);
}