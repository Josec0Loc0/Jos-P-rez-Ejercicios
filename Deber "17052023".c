#include <stdio.h>

int main() {
    int fila, columna;
    printf("Ingrese el número de filas: ");
    scanf("%d", &fila);
    
    printf("Ingrese el número de columnas: ");
    scanf("%d", &columna);
    
    int matriz[fila][columna];
    
    // Inicializar matriz con ceros
    for (int i = 0; i < fila; i++) { 
        for (int j = 0; j < columna; j++) { 
            matriz[i][j] = 0;
        }
    }
    
    printf("Matriz:\n"); 
    
    for (int i = 0; i < fila; i++) {
        for (int j = 0; j < columna; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    // Asignar unos en la diagonal principal
    for (int i = 0; i < fila; i++) {
        for (int j = 0; j < columna; j++) {
            if (i == j) { 
                matriz[i][j] = 1;
            }
        }
    }
    
    printf("Matriz con unos en la diagonal principal:\n");
    
    for (int i = 0; i < fila; i++) {
        for (int j = 0; j < columna; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
