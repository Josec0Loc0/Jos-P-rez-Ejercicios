#include <stdio.h>

int main() {
    int i, j;
    for (i = 0, j = 1; i <= 9; i += 2, j++) {
        printf("%d,%d / %d,%d / ", i, j, i + 1, j);
    }
    return 0;
}
