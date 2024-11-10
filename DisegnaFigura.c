#include <stdio.h>

int main() {
    int lato, i, j;

    printf("Inserisci la dimensione del lato del quadrato: ");
    scanf("%d", &lato);

    // Quadrato pieno
    printf("Quadrato pieno:\n");
    for (i = 0; i < lato; i++) { /*Scandisce le righe*/
        for (j = 0; j < lato; j++) { /*Scandisce le colonne*/
            printf("* ");
        }
        printf("\n");
    }

    // Quadrato vuoto
    printf("Quadrato vuoto:\n");
    for (i = 0; i < lato; i++) { /*Scandisce le righe*/
        for (j = 0; j < lato; j++) { /*Scandisce le colonne*/
            if (i == 0 || i == lato - 1 || j == 0 || j == lato - 1) { /* "i" se siamo nella prima colonna, "j" se siamo nella seconda colonna*/
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
