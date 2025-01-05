#include <stdlib.h>
#include <stdio.h>

/* Dato un vettore precaricato di 10 elementi, 
implementare l'algoritmo Selection sort 
e stampare via via il vettore ad ogni giro di scansione alla ricerca del minimo */

/* Funzione per stampare il vettore */
void stampavett(int vett[], int dimensione) { /* Funzione con array da stampare ed il numero di elementi
del vettore */
    int i; /* Dichiarazione della variabile fuori dal ciclo */
    /* Ciclo for per scorrere tutti gli elementi del vettore */
	for (i = 0; i < dimensione; i++) {
        printf("%d ", vett[i]);
    }
    printf("\n");
}

int main() {
    /* Vettore precaricato coi suoi elementi */
    int vettore[10] = {7, 9, 24, 5, 6, 1, 0, 33, 74, 48};
    int n = 10; // Dimensione del vettore

    printf("Vettore iniziale:\n");
	/* Chiama la funzione "stampavett" per stampare i valori del vettore */ 
    stampavett(vettore, n);

    /* Algoritmo Selection Sort, usato per ordinare in maniera crescente o decrescente */
    int i, j; // Dichiarazione delle variabili fuori dai cicli
    for (i = 0; i < n - 1; i++) { /* Itera su tutti gli elementi del vettore, tranne l'ultimo */
        int indiceMinimo = i; /* Salva la posizione dell'elemento corrente come "minimo provvisorio" */

        // Trova il valore minimo nella parte non ordinata
        for (j = i + 1; j < n; j++) {
            /* Confronta l'elemento corrente con l'elemento minimo provvisorio */
			if (vettore[j] < vettore[indiceMinimo]) {
                /* Se l'elemento corrente è più piccolo, aggiorna "indiceMinimo" */
				indiceMinimo = j;
            }
        }

        // Scambia il minimo trovato con l'elemento corrente
        if (indiceMinimo != i) { /* Controlla se il minimo trovato è diverso da "i" */
            int temp = vettore[i];
            vettore[i] = vettore[indiceMinimo];
            /* Usa una variabile temporanea "temp" per fare lo scambio senza perdere dati */
            vettore[indiceMinimo] = temp;
        }

        // Stampa il vettore dopo ogni iterazione
        printf("Dopo l'iterazione %d:\n", i + 1);
        /* Chiama "stampavett" per mostrare il vettore dopo l'iterazione */
        stampavett(vettore, n);
    }

    printf("Vettore ordinato:\n");
    /* Chiama "stampavett" per mostrare il risultato finale */
    stampavett(vettore, n);

    return 0;
}

