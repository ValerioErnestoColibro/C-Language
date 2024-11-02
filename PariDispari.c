#include <stdio.h>

int main() {
    int numero;

    // Input
    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    // Controllo
    if (numero % 2 == 0) {
        printf("Il numero \x8a pari.\n");
    } else {
        printf("Il numero \x8a dispari.\n");
    }

    return 0;
}
