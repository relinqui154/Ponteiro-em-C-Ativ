#include <stdio.h>

void ordena(int *a, int *b) {
    if (*a < *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int a, b;
    printf("Digite dois valores inteiros: ");
    scanf("%d %d", &a, &b);

    ordena(&a, &b);

    printf("Maior: %d\nMenor: %d\n", a, b);
    return 0;
}
