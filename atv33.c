#include <stdio.h>

void inverter(float v[], int i, int f);

int main() {
    float v[100];
    int n;

    printf("Quantidade de elementos: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%f", &v[i]);

    inverter(v, 0, n - 1);

    for (int i = 0; i < n; i++)
        printf("%.2f ", v[i]);

    return 0;
}

void inverter(float v[], int i, int f) {
    if (i >= f)
        return;

    float aux = v[i];
    v[i] = v[f];
    v[f] = aux;

    inverter(v, i + 1, f - 1);
}