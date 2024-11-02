#include <stdio.h>

int main() {
    int num1, num2;

    // Input
    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &num2);

    // Controllo
    if (num1 > num2) {
        printf("%d e' maggiore di %d.\n", num1, num2);
    } else if (num1 < num2) {
        printf("%d e' maggiore di %d.\n", num2, num1);
    } else {
        printf("I numeri sono uguali.\n");
    }

    return 0;
}
