#include <stdio.h>

void somaEmA(int *a, int b) {
    *a = *a + b;
}

int main() {
    int a, b;
    printf("Digite dois valores inteiros: ");
    scanf("%d %d", &a, &b);

    somaEmA(&a, b);

    printf("A = %d\nB = %d\n", a, b);
    return 0;
}
