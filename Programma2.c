#include <stdio.h>

int main() {
    FILE *file = fopen("access.log", "r");
    if (file == NULL) {
        printf("Errore: file non trovato\n");
        return 1;
    }

    int conta = 0;
    char c;

    while ((c = fgetc(file)) != EOF) {
        if (c != '\n') {
            conta++;
        }
    }

    fclose(file);

    printf("Caratteri: %d\n", conta);
    return 0;
}

