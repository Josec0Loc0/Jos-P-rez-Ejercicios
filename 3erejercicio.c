#include <stdio.h>

int es_primo(int num);

int main() {
    int num1, num2, i, cont1 = 0, cont2 = 0;

    printf("Ingrese el primer número: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    for (i = 1; i <= num1; i++) {
        if (num1 % i == 0 && es_primo(i)) {
            cont1++;
        }
    }

    for (i = 1; i <= num2; i++) {
        if (num2 % i == 0 && es_primo(i)) {
            cont2++;
        }
    }

    if (cont1 > cont2) {
        printf("El primer número tiene más números primos que el segundo.\n");
    } else if (cont2 > cont1) {
        printf("El segundo número tiene más números primos que el primero.\n");
    } else {
        printf("Ambos números tienen la misma cantidad de números primos.\n");
    }

    return 0;
}

int es_primo(int num) {
    int i;

    if (num < 2) {
        return 0;
    }

    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}
