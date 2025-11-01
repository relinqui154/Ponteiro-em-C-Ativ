#include <stdio.h>

int somaDobro(int *a, int *b) {
    *a *= 2;
    *b *= 2;
    return *a + *b;
}

int main() {
    int a, b, resultado;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    resultado = somaDobro(&a, &b);

    printf("Dobro de A: %d\nDobro de B: %d\nSoma: %d\n", a, b, resultado);
    return 0;
}
