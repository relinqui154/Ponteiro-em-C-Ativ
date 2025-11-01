#include <stdio.h>

int main() {
    int inteiro1 = 10, inteiro2 = 67548;
    int *i1 = &inteiro1, *i2 = &inteiro2;

    printf("%d \n %d \n", i1, i2);

    if (i1 >= i2) {
        printf("Primeiro ponteiro maior");
    } else {
        printf("Segundo ponteiro maior");
    }


    return 0;
}

