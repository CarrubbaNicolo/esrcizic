#include <stdio.h>

int main(void) {
    int n;

    printf("Inserisci un numero n: ");
    if (scanf("%d", &n) != 1) {
        return 1; // input non valido
    }

    for (int i = 2; i <= n; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}