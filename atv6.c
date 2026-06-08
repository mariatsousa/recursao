#include <stdio.h>

int multipRec(int n1, int n2);

int main() {
    int n1, n2;

    printf("Insira o primeiro numero: ");
    scanf("%d", &n1);

    printf("Insira o segundo numero: ");
    scanf("%d", &n2);

    int m = multipRec(n1, n2);
    printf("%d x %d = %d \n", n1, n2, m);

    return 0;
}

int multipRec(int n1, int n2) {
    if (n2 == 0)
        return 0;

    return n1 + multipRec(n1, n2 - 1);
}