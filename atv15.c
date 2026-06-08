#include <stdio.h>

float serie(int n);

int main() {
    int n;

    do {
        printf("Insira n: ");
        scanf("%d", &n);
    } while (n <= 0);

    float s = serie(n);

    printf("S = %.2f", s);

    return 0;
}

float serie(int n) {
    if (n == 1)
        return 2.0;

    return ((float)(n * n + 1) / n) + serie(n - 1);
}