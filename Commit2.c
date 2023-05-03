#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, suma = 0, contador = 0; // aqui se muestran las variables n para almacenar cada número ingresado,haciendo posible la suma de los números negativos.
    while (abs(suma) <= 1200) { // se define que mientras la suma de los numeros negativos sea menor o igual a 1200
        printf("Ingrese un numero: ");
        scanf("%d", &n); // Ingreso de números
        suma += n < 0 ? n : 0; // suma de todos los números negativos
        contador++; // aumentando el contador de la suma de los números negativos
    }
