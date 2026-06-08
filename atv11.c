#include <stdio.h>

void exibir(int v[], int n, int i);

int main() {
    int v[5] = {10, 20, 30, 40, 50};

    exibir(v, 5, 0);

    return 0;
}

void exibir(int v[], int n, int i) {
    if (i == n)
        return;

    printf("%d ", v[i]);

    exibir(v, n, i + 1);
}