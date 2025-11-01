#include <stdio.h>

void troca(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;
    printf("Digite dois valores inteiros: ");
    scanf("%d %d", &a, &b);

    troca(&a, &b);

    printf("Depois da troca: A = %d, B = %d\n", a, b);
    return 0;
}
