#include <stdio.h>   // Include la libreria standard di input/output

#define SIZE 5       // Definisce una costante `SIZE` con valore 5, che rappresenta la dimensione del vettore

void rotateRight(int arr[], int size) {
    int last = arr[size - 1];  // Salva l'ultimo elemento del vettore
    for (int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1];   // Sposta ogni elemento a destra
    }
    arr[0] = last;  // Metti l'ultimo elemento nella prima posizione
}

void rotateLeft(int arr[], int size) {
    int first = arr[0];   // Salva il primo elemento del vettore
    for (int i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];  // Sposta ogni elemento a sinistra
    }
    arr[size - 1] = first;  // Metti il primo elemento nell'ultima posizione
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);  // Stampa ciascun elemento del vettore seguito da uno spazio
    }
    printf("\n");  // Vai a capo dopo la stampa del vettore
}

int main() {
    int arr[SIZE];  // Definisce un array `arr` di interi con dimensione `SIZE`
    int choice;     // Variabile per memorizzare la scelta dell'utente

    // Chiede all'utente di inserire i valori del vettore
    printf("Inserisci %d elementi del vettore:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arr[i]);  // Memorizza l'elemento inserito dall'utente nell'array
    }

    // Ciclo principale per gestire il menu
    do {
        // Stampa il menu di scelta
        printf("\nScegli un'opzione:\n");
        printf("1) Rotazione a destra\n");
        printf("2) Rotazione a sinistra\n");
        printf("3) Uscita\n");
        printf("Scelta: ");
        scanf("%d", &choice);  // Legge la scelta dell'utente

        // Gestisce la scelta dell'utente
        switch (choice) {
            case 1:
                rotateRight(arr, SIZE);  // Esegue la rotazione a destra del vettore
                printf("Vettore dopo rotazione a destra: ");
                printArray(arr, SIZE);  // Stampa il vettore aggiornato
                break;
            case 2:
                rotateLeft(arr, SIZE);   // Esegue la rotazione a sinistra del vettore
                printf("Vettore dopo rotazione a sinistra: ");
                printArray(arr, SIZE);  // Stampa il vettore aggiornato
                break;
            case 3:
                printf("Uscita...\n");   // Messaggio di uscita
                break;
            default:
                printf("Scelta non valida, riprova.\n");  // Messaggio per scelta errata
        }
    } while (choice != 3);  // Continua finché l'utente non sceglie di uscire

    return 0;  // Termina il programma
}
