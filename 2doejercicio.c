#include <stdio.h>

int main() {
    int num, i;

    printf("Ingrese un número para mostrar su tabla de multiplicar: ");
    scanf("%d", &num);

    printf("Tabla de multiplicar de %d:\n", num);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
