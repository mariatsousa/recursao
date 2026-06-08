#include <stdio.h>

int inverso(int n, int inv);

int main() {
    int n;

    printf("Insira um numero: ");
    scanf("%d", &n);

    printf("%d", inverso(n, 0));

    return 0;
}

int inverso(int n, int inv) {
    if (n == 0)
        return inv;

    return inverso(n / 10, inv * 10 + n % 10);
}