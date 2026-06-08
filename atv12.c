#include <stdio.h>

int menor(int v[], int n);

int main() {
    int v[5] = {8, 3, 12, 1, 7};

    int m = menor(v, 5);

    printf("Menor elemento: %d", m);

    return 0;
}

int menor(int v[], int n) {
    if (n == 1)
        return v[0];

    int m = menor(v, n - 1);

    if (v[n - 1] < m)
        return v[n - 1];

    return m;
}