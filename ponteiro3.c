#include <stdio.h>

int main() {
    int a, b;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    if (&a > &b)
        printf("Conteudo do maior endereco: %d\n", a);
    else
        printf("Conteudo do maior endereco: %d\n", b);

    return 0;
}
