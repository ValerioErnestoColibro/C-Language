#include <stdio.h>
#include <stdlib.h>
#define N 10 /* Definisce la quantita' COSTANTE dell'array N */

int main(int argc, char *argv[]) {
    int voti[N] = {0, 3, 5}; // Inizializziamo ogni elemento dell'array a 0
    int i;
    int massimo = voti[0], posmax = 0, acc = voti[0];
    float media; // Variabile per la media

    voti[1] = 3; // Assegniamo 3 al secondo elemento dell'array

    printf("[");
    for (i = 0; i < N; i++) {
        printf("%d", voti[i]);
        if (i < N - 1) printf(", ");
    }
    printf("]\n");

    for (i = 1; i < N; i++) { // Ciclo per calcolare massimo e somma
        if (massimo < voti[i]) {
            massimo = voti[i];
            posmax = i;
        }
        acc += voti[i];
    }

    media = acc / (float)N; // Calcolo della media

    printf("Il massimo \x8A uguale a %d nella posizione %d", massimo, posmax);
    printf("\nLa somma dei voti \x8A uguale a %d", acc);
    printf("\nLa media dei voti \x8A uguale a %.2f", media); // Stampa la media con 2 decimali

    return 0;
}
