#include <stdio.h>

int main() {
    int inteiro = 10;
    float real = 5.5;
    char caractere = 'A';

    int *pInteiro = &inteiro;
    float *pReal = &real;
    char *pCaractere = &caractere;

    printf("Antes da modificacao:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n", caractere);

    *pInteiro = 20;
    *pReal = 10.75;
    *pCaractere = 'Z';

    printf("\nDepois da modificacao:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n", caractere);

    return 0;
}
