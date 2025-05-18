#include <stdio.h>
#include <stdlib.h>

/* Dato il file "articolo_giornale.txt" ricopiare le prime 30 parole su una matrice 30x50 di char. 
Le parole vanno ricopiate una per riga e vanno memorizzate in formato stringa.
Il programma infine stamperà le stringhe (una per riga) memorizzate nella matrice */

/* Definisci una costante per il numero massimo di righe della matrice (30 parole) */
#define MAX_RIGHE 30
/* Definisci una costante per il numero massimo di colonne per ogni riga (49 caratteri + 1 per il terminatore \0) */
#define MAX_COLONNE 50

int main() {
    /* Dichiara un puntatore assegnato a un file per leggere il file di testo */
    FILE *file;
    /* Dichiara una matrice di caratteri */
    char matrice[MAX_RIGHE][MAX_COLONNE];
    /* Inizializza un contatore per il numero di parole lette */
    int parola_count = 0;
    int i;

    // Apre il file di testo in modalità lettura ("r")
    file = fopen("articolo_giornale.txt", "r");
    // Controlla se il file non è stato aperto correttamente
    if (file == NULL) {
        // Restituisce un messaggio di errore
        printf("Errore nell'apertura del file.\n");
        // Esce dal programma con un codice di errore
        return 1;
    }

    // Inizia un ciclo che legge le parole dal file e le memorizza nella matrice
    // Se "fscanf" legge con successo una parola, restituisce 1
    while (parola_count < MAX_RIGHE && fscanf(file, "%49s", matrice[parola_count]) == 1) {
        // Incrementa il contatore delle parole lette
        parola_count++;
    }

    // Chiudi il file per risparmiare risorse
    fclose(file);

    // Ciclo che itera su tutte le parole lette (da 0 a "parola_count - 1")
    for (i = 0; i < parola_count; i++) {
        // Stampa ogni parola memorizzata nella matrice
        printf("%s\n", matrice[i]);
    }

    return 0;
}
