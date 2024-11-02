#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int scelta, i;

    printf("Digita 0 per avere il MAIUSCOLO, oppure 1 per il minuscolo: ");
    scanf("%d", &scelta);

    if (scelta == 0) {
        for (i = 65; i < 91; i++) {
            printf("%c ", i);
        }
    } else {
        for (i = 97; i < 123; i++) {
            printf("%c ", i);
        }
    }

    return 0;
}
