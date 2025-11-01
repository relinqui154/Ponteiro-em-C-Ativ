#include <stdio.h>

int main() {
    int v[5];
    int *p;

    for (p = v; p < v + 5; p++) {
        printf("Digite um valor: ");
        scanf("%d", p);
    }

    for (p = v; p < v + 5; p++)
        printf("Dobro: %d\n", *p * 2);

    return 0;
}
