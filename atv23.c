#include <stdio.h>

int soma(int v[], int n);

int main() {
    int v[5] = {2, 4, 6, 8, 10};

    printf("Soma = %d", soma(v, 5));

    return 0;
}

int soma(int v[], int n) {
    if (n == 1)
        return v[0];

    return v[n - 1] + soma(v, n - 1);
}