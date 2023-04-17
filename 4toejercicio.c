#include <stdio.h>

int main() {
    int num1, num2, i, menor, mayor, hay_multiplos = 0;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    if (num1 < num2) {
        menor = num1;
        mayor = num2;
    } else {
        menor = num2;
        mayor = num1;
    }

    printf("Los multiplos de 5 entre %d y %d son:\n", menor, mayor);

    for (i = menor; i <= mayor; i++) {
        if (i % 5 == 0) {
            printf("%d\n", i);
            hay_multiplos = 1;
        }
    }

    if (!hay_multiplos) {
        printf("No existen multiplos de 5 entre %d y %d.\n", menor, mayor);
    }
    
    return 0;
}
