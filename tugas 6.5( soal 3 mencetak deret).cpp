#include <stdio.h>

int main() {
    int bilangan = 1;
    int i;

    for (i = 1; i <= 11; i++) {
        printf("%d ", bilangan);
        bilangan *= 2;
    }

    printf("\n");
    return 0;
}
