#include <stdio.h>

int main() {
    int i;

    printf("Los números pares entre 20 y 200 son:\n");

    for (i = 20; i <= 200; i++) {
        if (i % 2 == 0) {
            printf("%d,",i);
        }
    }
    

    return 0;
}
